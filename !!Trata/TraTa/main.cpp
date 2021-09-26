#include "da_window.h"
#include "authentication_dialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Authentication_dialog dlg;
    Da_window w;
    w.show();
    return a.exec();
}
