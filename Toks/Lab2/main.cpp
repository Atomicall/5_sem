#include "the_window.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    The_Window w;
    w.show();
    return app.exec();
}
