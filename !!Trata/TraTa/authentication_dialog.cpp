#include "authentication_dialog.h"
#include "ui_authentication_dialog.h"

Authentication_dialog::Authentication_dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Authentication_dialog)
{
    ui->setupUi(this);
}

Authentication_dialog::~Authentication_dialog()
{
    delete ui;
}
