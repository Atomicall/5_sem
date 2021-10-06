#ifndef COM_PORT_COMMUNICATION_H
#define COM_PORT_COMMUNICATION_H

#pragma once
#include "include/serial/serial.h"
#include <vector>
#include <string>
#include <iostream>
#include <stdlib.h>
#include <QByteArray>


class COM_Port_Communication
{
public:
    COM_Port_Communication();
    ~COM_Port_Communication(){delete com; delete buffer;}

    const std::string &getPort() const;
    void setPort(const std::string &newPort);
    unsigned long getBaud() const;
    void setBaud(unsigned long newBaud);
    bool isOpen();

    bool create_com (std::string& port, unsigned long baude);
    bool isExists() {return exist;}

    size_t writeString (std::string& whatto);
    void packAndWriteString(std::string& whatto);
    std::string recieveAndUnpackString();
    std::string readString();
    serial::Serial* getCom () {return com;} //warning




protected:
    serial::Serial* com;
    std::string port;
    unsigned long baud = 0;
    size_t BUFFSIZE = 256;
    uint8_t* buffer;
    void clearBuffer() {memset(buffer, '\t', BUFFSIZE);};
    bool exist = 0;
};



#endif // COM_PORT_COMMUNICATION_H

class COM_Port_Info{
 public:
 static std::vector<serial::PortInfo> get_PortsInfo();
 static std::vector<std::string> get_PortNames() throw();
 static std::vector<std::string> get_PortStandardSpeeds();
};



