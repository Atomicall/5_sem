#ifndef THE_WINDOW_H
#define THE_WINDOW_H

#include <QMainWindow>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QTimer>


#pragma once
#include "com_port_communication.h"
#include <vector>
#include <string>
using std::vector;
using std::string;
using std::clog;


class The_Window : public QMainWindow
{
    Q_OBJECT

public:
    The_Window(QWidget *parent = nullptr);
    ~The_Window();


public:
    QWidget *centralwidget;
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *TX;
    QLabel *TX_Label;
    QTextEdit *TX_TextEdit;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *RX;
    QLabel *RX_Label;
    QTextEdit *RX_TextEdit;
    QGroupBox *groupBox_3;
    QGroupBox *groupBox;
    QPushButton *Close_Button;
    QPushButton *Open_Button;
    QComboBox *PortSelect_ComboBox;
    QLabel *COM_Label;
    QLabel *Status_Label;
    QLineEdit *Status_Line;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *Speed_Label;
    QComboBox *SpeedSelect_ComboBox;
    QPushButton *sendButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QLineEdit* TX_Input_LineEdit;


    string toSend_string;
    QByteArray toSend_byteArray;

    QString recievedData_string;

    void initLayout(QMainWindow *The_Window)
    {
        if (The_Window->objectName().isEmpty())
            The_Window->setObjectName(QString::fromUtf8("The_Window"));
        The_Window->resize(837, 545);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(The_Window->sizePolicy().hasHeightForWidth());
        The_Window->setSizePolicy(sizePolicy);
        The_Window->setBaseSize(QSize(0, 0));
        centralwidget = new QWidget(The_Window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 0, 831, 521));
        verticalLayoutWidget_3 = new QWidget(groupBox_2);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(10, 160, 461, 321));
        TX = new QVBoxLayout(verticalLayoutWidget_3);
        TX->setObjectName(QString::fromUtf8("TX"));
        TX->setContentsMargins(0, 0, 0, 0);
        TX_Label = new QLabel(verticalLayoutWidget_3);
        TX_Label->setObjectName(QString::fromUtf8("TX_Label"));

        TX->addWidget(TX_Label);

        TX_TextEdit = new QTextEdit(verticalLayoutWidget_3);
        TX_TextEdit->setObjectName(QString::fromUtf8("TX_TextEdit"));
        TX_TextEdit->setTabChangesFocus(true);
        TX_TextEdit->setEnabled(true);
        TX->addWidget(TX_TextEdit);
        TX_TextEdit->setReadOnly(true);

        horizontalLayout_5 = new QHBoxLayout (verticalLayoutWidget_3);
        TX_Input_LineEdit = new QLineEdit (groupBox_2);
        horizontalLayout_5->addWidget(TX_Input_LineEdit);
        sendButton = new QPushButton(groupBox_2);
        sendButton->setObjectName(QString::fromUtf8("pushButton"));
        sendButton->setGeometry(QRect(620, 70, 201, 25));
        sendButton->setEnabled(false);
        horizontalLayout_5->addWidget(sendButton);
        TX->addLayout(horizontalLayout_5);


        verticalLayoutWidget_4 = new QWidget(groupBox_2);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(490, 160, 331, 321));
        RX = new QVBoxLayout(verticalLayoutWidget_4);
        RX->setObjectName(QString::fromUtf8("RX"));
        RX->setContentsMargins(0, 0, 0, 0);
        RX_Label = new QLabel(verticalLayoutWidget_4);
        RX_Label->setObjectName(QString::fromUtf8("RX_Label"));

        RX->addWidget(RX_Label);

        RX_TextEdit = new QTextEdit(verticalLayoutWidget_4);
        RX_TextEdit->setObjectName(QString::fromUtf8("RX_TextEdit"));

        RX->addWidget(RX_TextEdit);
        RX_TextEdit->setReadOnly(true);

        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 10, 821, 131));
        groupBox = new QGroupBox(groupBox_3);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 251, 81));
        Close_Button = new QPushButton(groupBox);
        Close_Button->setObjectName(QString::fromUtf8("Close_Button"));
        Close_Button->setGeometry(QRect(150, 20, 89, 25));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Close_Button->sizePolicy().hasHeightForWidth());
        Close_Button->setSizePolicy(sizePolicy1);
        Close_Button->setEnabled(false);
        Open_Button = new QPushButton(groupBox);
        Open_Button->setObjectName(QString::fromUtf8("Open_Button"));
        Open_Button->setGeometry(QRect(150, 50, 89, 25));
        Open_Button->setEnabled(false);

        PortSelect_ComboBox = new QComboBox(groupBox);
        PortSelect_ComboBox->setObjectName(QString::fromUtf8("PortSelect_ComboBox"));
        PortSelect_ComboBox->setGeometry(QRect(50, 20, 91, 20));
        COM_Label = new QLabel(groupBox);
        COM_Label->setObjectName(QString::fromUtf8("COM_Label"));
        COM_Label->setGeometry(QRect(0, 20, 41, 21));
        COM_Label->setLayoutDirection(Qt::LeftToRight);
        COM_Label->setAlignment(Qt::AlignCenter);
        Status_Label = new QLabel(groupBox);
        Status_Label->setObjectName(QString::fromUtf8("Status_Label"));
        Status_Label->setGeometry(QRect(0, 50, 41, 21));
        Status_Label->setAlignment(Qt::AlignCenter);
        Status_Line = new QLineEdit(groupBox);
        Status_Line->setObjectName(QString::fromUtf8("Status_Line"));
        Status_Line->setGeometry(QRect(50, 50, 91, 20));
        Status_Line->setReadOnly(true);
        Status_Line->setText("Init");
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Status_Line->sizePolicy().hasHeightForWidth());
        Status_Line->setSizePolicy(sizePolicy2);
        horizontalLayoutWidget = new QWidget(groupBox_3);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(270, 60, 340, 41));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        Speed_Label = new QLabel(horizontalLayoutWidget);
        Speed_Label->setObjectName(QString::fromUtf8("Spped_Label"));

        horizontalLayout_4->addWidget(Speed_Label);

        SpeedSelect_ComboBox = new QComboBox(horizontalLayoutWidget);
        SpeedSelect_ComboBox->setObjectName(QString::fromUtf8("SpeedSelect_ComboBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(200);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(SpeedSelect_ComboBox->sizePolicy().hasHeightForWidth());
        SpeedSelect_ComboBox->setSizePolicy(sizePolicy3);
        SpeedSelect_ComboBox->setBaseSize(QSize(0, 0));
        SpeedSelect_ComboBox->setDuplicatesEnabled(false);

        horizontalLayout_4->addWidget(SpeedSelect_ComboBox);


        The_Window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(The_Window);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 837, 25));
        The_Window->setMenuBar(menubar);
        statusbar = new QStatusBar(The_Window);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        The_Window->setStatusBar(statusbar);
        retranslateUi();

    }
    void retranslateUi()
    {
        this->setWindowTitle(QApplication::translate("The_Window", "The_Window", nullptr));
        groupBox_2->setTitle(QString());
        TX_Label->setText(QApplication::translate("The_Window", "TX", nullptr));
        RX_Label->setText(QApplication::translate("The_Window", "RX", nullptr));
        groupBox_3->setTitle(QApplication::translate("The_Window", "COM Configure", nullptr));
        groupBox->setTitle(QString());
        Close_Button->setText(QApplication::translate("The_Window", "Close", nullptr));
        Open_Button->setText(QApplication::translate("The_Window", "Open", nullptr));
        COM_Label->setText(QApplication::translate("The_Window", "COM:", nullptr));
        Status_Label->setText(QApplication::translate("The_Window", "Status:", nullptr));
        Speed_Label->setText(QApplication::translate("The_Window", "Speed(baud):", nullptr));
        sendButton->setText(QApplication::translate("The_Window", "Send", nullptr));
    } // retranslateUi
    void setupUi(){
        initLayout(this);
        sendLog("Layout set");
        connect(Open_Button, &QAbstractButton::clicked, this, &The_Window::openButton_Slot);
        connect(Close_Button, &QAbstractButton::clicked, this, &The_Window::closeButton_Slot);

        PortSelect_ComboBox_fill();
        sendLog("PortSelect_ComboBox set");
        BaudRate_Combobox_fill();
        sendLog("BaudRate_Combobox set");
        this->Status_Line->clear();

        this->recieverTimer = new QTimer();
        connect(PortSelect_ComboBox, SIGNAL(currentTextChanged (const QString&)), this, SLOT(PortSelect_ComboBox_Slot(const QString&)));
        connect(SpeedSelect_ComboBox, SIGNAL(currentTextChanged (const QString&)), this, SLOT(SpeedSelect_ComboBox_Slot(const QString&)));
        connect(sendButton, &QAbstractButton::clicked, this, &The_Window::sendButton_Slot);
        connect(recieverTimer, &QTimer::timeout, this,  &The_Window::checkData_Slot);
    }








private:
    void sendLog(std::string whatto){std::clog<<whatto<<std::endl;}
    COM_Port_Communication comPort;
    std::string port = "null";
    unsigned long baud = 0;
    bool wasOneOfTheButtonsClicked = 0;
    QTimer* recieverTimer;
    int T_INTERVAL=10;

    void PortSelect_ComboBox_fill ();
    void BaudRate_Combobox_fill();
    void Open_ComPort(); // to remove
    void Close_ComPort(); // to remove
    size_t Send_Data();
    void Recieve_Data();
    void activate_OpenCloseButtons();

private slots:
    void openButton_Slot();
    void closeButton_Slot();
    void sendButton_Slot();
    void PortSelect_ComboBox_Slot(const QString& pickedPort);
    void SpeedSelect_ComboBox_Slot(const QString& pickedSpeed);
    void checkData_Slot();
    void Update_RX();



};
#endif // THE_WINDOW_H




class COM_Port_Recieved_Event : public QEvent{

};
