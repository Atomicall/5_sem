#include "the_window.h"


The_Window::The_Window(QWidget *parent) : QMainWindow(parent)
{
    this->setupUi();
}


The_Window::~The_Window()
{

}



void The_Window:: PortSelect_ComboBox_fill (){
    vector<std::string> v = COM_Port_Info::get_PortNames();
    for (auto iter = v.begin(); iter!=v.end(); iter++ ){
        PortSelect_ComboBox->addItem(QString((iter)->c_str()));
    }
    PortSelect_ComboBox->setCurrentIndex(-1);

}

void The_Window::BaudRate_Combobox_fill()
{
    vector<std::string> v = COM_Port_Info::get_PortStandardSpeeds();
    for (auto iter = v.begin(); iter!=v.end(); iter++ ){
        SpeedSelect_ComboBox->addItem(QString((iter)->c_str()));
    }
    SpeedSelect_ComboBox->setCurrentIndex(-1);
}

void The_Window::Open_ComPort()
{
    if (0==this->baud || "null"==this->port) return;
    if (1!=this->comPort.create_com(this->port, this->baud)) return;
    else {sendLog("Com port " + this->port+"Opened"); recieverTimer->start(1000);}
}

void The_Window::Close_ComPort()
{
    if (!comPort.getCom()->isOpen()){sendLog("Com port seems to be close, nothing were changed");}
    else {
       comPort.getCom()->close();
       sendLog("Com port closed");
    }
    this->PortSelect_ComboBox_fill();
    this->BaudRate_Combobox_fill();
    recieverTimer->stop();
}

size_t The_Window::Send_Data()
{

    comPort.packAndWriteString(this->toSend_string);
}

void The_Window::Recieve_Data()
{
    if (this->comPort.isExists()){
        if (this->comPort.isOpen()){
            recievedData_string = QString::fromStdString(this->comPort.recieveAndUnpackString());
            //recievedData_string = QString::fromStdString(this->comPort.readString());
            if (!recievedData_string.isEmpty()){
                emit this->Update_RX();
            }
        }
        else {
            sendLog("Com port closed");
        }
    }
    else {
        sendLog("COM POort doesn't exist");
    }
}



void The_Window::checkData_Slot()
{
   if (comPort.getCom()->available()){
      // sendLog("data available");
       this->Recieve_Data();
   }
   else {
       //sendLog("Data not available");
   }


}

void The_Window::Update_RX()
{
    static int line = 1;
    RX_TextEdit->append("|" + QString::number(line++) + "| "+ this->recievedData_string);

}



void The_Window::activate_OpenCloseButtons()
{
    if (this->wasOneOfTheButtonsClicked) return;
    if (!this->port.empty())
    if (this->baud != 0 && this->port != "null"){
        Open_Button->setEnabled(true);
    }

}

void The_Window::openButton_Slot()
{
    // IF was no com port
    if (nullptr == comPort.getCom()){
        sendLog("comPort == nullptr, trying to create");
        if (comPort.create_com(this->port, this->baud)) {
            //comPort.getCom()->open();
            sendLog("seems like "+this->port+" with "+std::to_string(this->baud)+" Created and opened");
            this->Status_Line->setText("Created and opened");
        }
    }
    // If com port already exist and was opened
    else if (comPort.isOpen()) {sendLog("Com already opened"); return;}
        else {
        sendLog("Trying to open");
        comPort.getCom()->setPort(port);
        comPort.getCom()->setBaudrate(baud);
        comPort.getCom()->open();
        if (comPort.getCom()->isOpen()){
            this->Status_Line->setText(QString().fromStdString("O:" + std::to_string(comPort.getCom()->getBaudrate()) +" " + comPort.getCom()->getPort()));
            sendLog("Com port " + this->port+"Opened");
        }
        else { this->Status_Line->setText("Failed to open!");}
        }
    this->Close_Button->setEnabled(true);
    this->Open_Button->setEnabled(false);
    this->PortSelect_ComboBox->setEnabled(false);
    this->SpeedSelect_ComboBox->setEnabled(false);
    this->sendButton->setEnabled(true);
    recieverTimer->start(T_INTERVAL);
    if (!this->wasOneOfTheButtonsClicked) this->wasOneOfTheButtonsClicked = 1;

}

void The_Window::closeButton_Slot()
{
    if (comPort.isOpen()){
        sendLog("Trying to close");
        comPort.getCom()->close();
        if (!comPort.getCom()->isOpen()) {
            this->Status_Line->setText("Closed");
        };
        this->Close_Button->setEnabled(false);
        this->Open_Button->setEnabled(true);
        this->sendButton->setEnabled(false);
        this->PortSelect_ComboBox->setEnabled(true);
        this->SpeedSelect_ComboBox->setEnabled(true);
        recieverTimer->stop();
        if (!this->wasOneOfTheButtonsClicked) this->wasOneOfTheButtonsClicked = 1;
    }
}

void The_Window::sendButton_Slot()
{
    static int line = 1;
    if (this->TX_Input_LineEdit->text().isEmpty()) {
        sendLog("TX_Line is empty");
        return;
    }
    else {
        toSend_string = this->TX_Input_LineEdit->text().toStdString();
        QString message = "|" + QString::number(line) + "| "+ QString::fromStdString(toSend_string);
//        if (this->Send_Data()!=toSend_string.length()){
//            sendLog("sendData.length != sended.length in line:" + toSend_string);
//            message = "!Error; see log";
//        }
        this->Send_Data();
        TX_Input_LineEdit->clear();
        TX_TextEdit->append(message);
        line++;
    }
}

void The_Window::PortSelect_ComboBox_Slot(const QString& pickedPort)
{
    sendLog(pickedPort.toStdString() + " Picked");
    if (!pickedPort.isEmpty()) {
        this->port = pickedPort.toStdString();
        this->Status_Line->setText("Set "+ pickedPort);
        activate_OpenCloseButtons();
    }



}

void The_Window::SpeedSelect_ComboBox_Slot(const QString &pickedSpeed)
{
    sendLog(pickedSpeed.toStdString() + " Picked");
    if (!pickedSpeed.isEmpty()){
        this->baud = pickedSpeed.toULong();
        //sendLog (std::to_string(this->baud));
        this->Status_Line->setText("Set " + QString().fromStdString(std::to_string(this->baud)));
        activate_OpenCloseButtons();
    }
}



