#include "da_window.h"


Da_window::Da_window(QWidget *parent) : QMainWindow(parent)
{
    setupUi (this);
    retranslateUi(this);
    ttDb = new DBFacade<TT_Dao> (this->DB_Table);
    connect();
    activateButtons();
}

void Da_window::connect()
{

}

void Da_window::activateButtons()
{

}

void Da_window::on_Add_clicked()
{

}

void Da_window::on_Edit_clicked()
{

}

void Da_window::on_Delete_clicked()
{

}
