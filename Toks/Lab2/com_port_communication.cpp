#include "com_port_communication.h"
using std::vector;
using std::string;

COM_Port_Communication::COM_Port_Communication(){
    std::clog<< "COM_PORT_COMMUNICATION Obhect created"<<std::endl;
    com = nullptr;
}

const std::string &COM_Port_Communication::getPort() const
{
    return port;
}

void COM_Port_Communication::setPort(const std::string &newPort)
{
    port = newPort;
}

unsigned long COM_Port_Communication::getBaud() const
{
    return baud;
}

void COM_Port_Communication::setBaud(unsigned long newBaud)
{
    baud = newBaud;
}

bool COM_Port_Communication::isOpen()
{
    return com->isOpen();
}


bool COM_Port_Communication::create_com(std::string& port, unsigned long baude)
{
    try {
         this->com = new serial::Serial (port, baude, serial::Timeout::simpleTimeout(1000));
         buffer = new uint8_t[BUFFSIZE];
         exist = 1;
    }  catch (std::exception e) {
        std::cerr<<"Exeption in: create_com"<<std::endl;
        throw e;
    }
    return 1;
}



size_t COM_Port_Communication::writeString(std::string& whatto)
{
    return this->getCom()->write(whatto);
}

void COM_Port_Communication::packAndWriteString(std::string& whatto)
{
    volatile int mes_len = whatto.length();
    char rep1 [2] = {0x7D, 0x5E};
    char rep2 [2] = {0x7D, 0x5D};
    QByteArray b_arr;//
    QByteArray message = QByteArray::fromStdString(static_cast<const std::string>(whatto));
    b_arr.resize(1);
    b_arr[0] = 0x7E; //Flag
    QByteArray len(4, '0'); // 4 bytes for Message_legnth
    len.replace(4-QByteArray::number(mes_len, 16).length(),QByteArray::number(whatto.length(), 16).length(), QByteArray::number(whatto.length(), 16).toUpper());
    b_arr.insert(1, len);
    std::clog<<"Length from packet : "<< len.toStdString();


    b_arr.append(message); // Message starts from pos 6
    // Byte-stuff
    for (int i=0; i< mes_len; i++){
        if (0x7E==b_arr[i+5]){
            b_arr.replace(i+5, 1, rep1, 1);
            b_arr.insert(i+6, rep1[1]);
            i++;
            mes_len++;
            continue;
        }
        if (0x7D==b_arr[i+5]){
            b_arr.replace(i+5, 1, rep2, 1);
            b_arr.insert(i+6, rep2[1]);
            i++;
            mes_len++;
            continue;
        }
    }
    b_arr.append(0x7E);
    this->com->write(reinterpret_cast<const uint8_t*>(b_arr.constData()), b_arr.size());
}

string COM_Port_Communication::recieveAndUnpackString()
{
    clearBuffer();
    std::string mes;
    size_t available = this->getCom()->available();
    if (available <= 5) return mes;
    size_t bytes_read = this->getCom()->read(buffer, BUFFSIZE);
    QByteArray b_arr  = QByteArray::fromRawData(reinterpret_cast<const char*> (buffer), BUFFSIZE).trimmed();
    std::clog<<"Recieved: "<< b_arr.toStdString()<<" sizeOf whole packet: "<<b_arr.size()<<std::endl;
    char mes_len_From_packet[6] ={'0', 'x'};
    mes_len_From_packet [2] = b_arr[1];
    mes_len_From_packet [3] = b_arr[2];
    mes_len_From_packet [4] = b_arr[3];
    mes_len_From_packet [5] = b_arr[4];
    uint16_t mes_len_From_packet_Int;
    sscanf(mes_len_From_packet, "%x", &mes_len_From_packet_Int);
    std::string mes_len_From_packet_str = std::to_string(mes_len_From_packet_Int);
    std::clog<<"Length from packet : "<< mes_len_From_packet_Int<<std::endl;
    volatile int mLen = b_arr.size() - 1 - 1 -4;
    for (int i = 0; i < mLen ; i++){
            if (0x7D == b_arr[i+5]){
                //replace
                if (0x5E == b_arr[i+5 + 1]){
                    b_arr[i+5 + 1] = 0x7E;
                }
                else if (0x5D == b_arr[i+5 + 1]){
                    b_arr[i+5 + 1] = 0x7D;
                }
                //delete 7D
                b_arr.remove(i+5, 1);
                mLen--;
            }
        }
    mes = b_arr.mid(5, mes_len_From_packet_Int).toStdString();
    // Len from header != len after stuffing?
    if (mes_len_From_packet_Int != b_arr.size() - 1 - 1 -4 ){
        std::clog<<"Original and accepted lengths do not match! " <<std::endl;
    }
    return mes;




 }


std::string COM_Port_Communication::readString()
{
    clearBuffer();
    size_t available = this->getCom()->available();
    size_t bytes_read = this->getCom()->read(buffer, BUFFSIZE);
    if (bytes_read < available) {
        std::clog<<"Read < available !"<<std::endl;
    }
    std::string string_buffer;
    string_buffer.append (reinterpret_cast<const char*>(buffer), bytes_read);
    return string_buffer;

};

vector<serial::PortInfo> COM_Port_Info:: get_PortsInfo(){
    return serial::list_ports();
}

std::vector<std::string> COM_Port_Info::get_PortNames() throw() {

    vector<serial::PortInfo> v = COM_Port_Info::get_PortsInfo();
    std::vector<std::string> s;
    for (auto iter = v.begin(); iter!=v.end(); iter++){
        s.push_back(iter->port);
    }
    if (s.empty()){
        std::clog<<"PortNames_Vector is empty in get_PortNames"<<std::endl;
        throw std::runtime_error("PortNames_Vector is Empty");
    }
    return s;
}

std::vector<string> COM_Port_Info::get_PortStandardSpeeds()
{
    std::vector<string> v;
    v.push_back("110");
    v.push_back("300");
    v.push_back("600");
    v.push_back("1200");
    v.push_back("2400");
    v.push_back("4800");
    v.push_back("9600");
    v.push_back("14400");
    v.push_back("19200");
    v.push_back("38400");
    v.push_back("57600");
    v.push_back("115200");
    v.push_back("128000");
    v.push_back("256000");
    return v;
}



