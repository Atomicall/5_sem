#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QInputDialog>
#include "math.h"

#define AMAX 10
#define COLLISION_WINDOW_DURATION 500

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->ui->pushButton->setEnabled(1);
    this->ui->spinBox->setEnabled(1);
    this->ui->pushButton_2->setEnabled(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_spinBox_valueChanged(int arg1)
{
    proc_amount = arg1;
}


void MainWindow::on_pushButton_clicked()
{
    this->ui->pushButton->setEnabled(0);
    run_proc();
    this->ui->pushButton->setEnabled(0);
    this->ui->spinBox->setEnabled(0);
    this->ui->pushButton_2->setEnabled(1);
}

void MainWindow::updateLabel(QString w)
{
    this->ui->textEdit->append(w);
}

void MainWindow::run_proc()
{
    const int pa = this->proc_amount;
    QVector<ThreadInst*> threads;
    QVector<QString> messages;
    for (int i=0 ; i< pa; i++) {
        QString text;
        do{
            text = QInputDialog::getText(this, "Message for process " + QString::fromStdString(std::to_string(i+1)), tr("Message"),
                                         QLineEdit::Normal);
        } while (text.isEmpty());
        messages.push_back(text);
        threads.push_back(new ThreadInst(QString::fromStdString(std::to_string(i+1) + "-> ").append(text)));
        connect(threads[i], SIGNAL(send_message(QString)), this, SLOT(updateLabel(QString)));
    }
    for (int i=0; i< pa; i++){
        threads[i]->startThis();
    }
    theadsStorage = threads;
}



ThreadInst::ThreadInst(QString& w) : QObject(0){

    this->messageNnum = w;
    moveToThread(&thr);
    connect (&thr, SIGNAL(started()), this, SLOT(run_th()));


}

void ThreadInst::startThis()
{
    runned = 1;
    thr.start();

}

void ThreadInst::stopThis()
{
    runned = 0;
    thr.terminate();

}


Buffer buffer;

void ThreadInst::run_th()
{
    QThread::msleep(rand() % 100);
    int i;
    int attempts = 0;

        bool flg =0; // need to send
        while (!flg && attempts < AMAX){
            emit (this->send_message("Sending; Attemp: " + QString::fromStdString(std::to_string(attempts) + "$ ") + messageNnum));
            if ( buffer.buff[0] == QChar(55)) // Collis
            {
                attempts ++;
                emit (this->send_message("JAM in $" + messageNnum));
                QThread::msleep((rand() % (int)pow(2,attempts))*COLLISION_WINDOW_DURATION);
                continue;
            }
            flg=1;
            for (i = 0;i < messageNnum.size();i++)
            {
                buffer.buff[i+1] = messageNnum[i];
                QThread::msleep(100/messageNnum.size());
            }
            QString recieve = buffer.buff.mid(1, messageNnum.size());

            if (recieve != messageNnum){
                flg = 0;
                attempts++;
                buffer.buff [0] = QChar(55);
                QThread::msleep(COLLISION_WINDOW_DURATION);

                buffer.buff [0] = QChar(0);
                emit (this->send_message("COLLISION w/attempt "+ QString::fromStdString(std::to_string(attempts)) + "$ "+ messageNnum + "\n"));
                if (attempts == AMAX){
                    emit (this->send_message("MAX ATTEMPST WITH $" + messageNnum));
                    return;
                }

            }

        }
        emit (this->send_message("###Send Succesfully $" + messageNnum + "\n"));
        attempts = 0;


}

void MainWindow::on_pushButton_2_clicked()
{
    for (int i=0; i< theadsStorage.size(); i++){
        theadsStorage[i]->stopThis();
    }
    this->ui->pushButton->setEnabled(1);
    this->ui->spinBox->setEnabled(1);
    this->ui->pushButton_2->setEnabled(0);
}


void MainWindow::on_pushButton_3_clicked()
{
    this->ui->textEdit->clear();
}

