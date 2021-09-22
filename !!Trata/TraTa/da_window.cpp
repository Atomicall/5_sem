#include "da_window.h"
#include "ui_da_window.h"

Da_window::Da_window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Da_window)
{
    ui->setupUi(this);
}

Da_window::~Da_window()
{
    delete ui;
}

