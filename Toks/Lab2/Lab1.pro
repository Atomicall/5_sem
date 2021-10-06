QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += main.cpp \
    com_port_communication.cpp \
    src/impl/list_ports/list_ports_linux.cc \
    src/impl/list_ports/list_ports_osx.cc \
    src/impl/list_ports/list_ports_win.cc \
    src/impl/unix.cc \
    src/impl/win.cc \
    src/serial.cc \
    the_window.cpp

HEADERS += \
    com_port_communication.h \
    include/serial/impl/unix.h \
    include/serial/impl/win.h \
    include/serial/serial.h \
    include/serial/v8stdint.h \
    the_window.h


win32 {
LIBS += -lhid -lsetupapi
}

QMAKE_CXXFLAGS += -static -static-libgcc -static-libstdc++


#FORMS += \
#    the_window.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

