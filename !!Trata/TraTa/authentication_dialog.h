#ifndef AUTHENTICATION_DIALOG_H
#define AUTHENTICATION_DIALOG_H

#include <QDialog>

namespace Ui {
class Authentication_dialog;
}

class Authentication_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Authentication_dialog(QWidget *parent = nullptr);
    ~Authentication_dialog();

private:
    Ui::Authentication_dialog *ui;
};

#endif // AUTHENTICATION_DIALOG_H
