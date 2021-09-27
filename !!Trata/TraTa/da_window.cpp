#include "da_window.h"


Da_window::Da_window(QWidget *parent) : QMainWindow(parent)
{
    setupUi (this);
    retranslateUi(this);
    ttDb = new DBFacade<TT_Dao> (this->DB_Table);
    _connect();
    activateButtons();
}

void Da_window::_connect()
{
  connect(this->Add_Button, SIGNAL(clicked()), this, SLOT(on_Add_clicked()));
  connect(this->Edit_Button, SIGNAL(clicked()), this, SLOT(on_Edit_clicked()));
  connect(this->Delete_Button, SIGNAL(clicked()), this, SLOT(on_Delete_clicked()));
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
