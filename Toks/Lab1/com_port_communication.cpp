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


bool COM_Port_Communication::create_com(std::string port, unsigned long baude)
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



size_t COM_Port_Communication::writeString(std::string whatto)
{
    return this->getCom()->write(whatto);
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



