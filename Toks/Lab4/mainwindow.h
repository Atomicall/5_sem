#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QThread>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


class Buffer {

public:
    Buffer(){buff.resize(2048);};
    QString buff;
    std::atomic<bool> is_busy = 0;
};

class ThreadInst : public QObject{
    Q_OBJECT

 public:
     ThreadInst(QString& w);
     void startThis();
     void stopThis();
private:
    bool runned = 0;
    QThread thr;
    QString messageNnum;


signals:
    void send_message(QString w);
private slots:
    void run_th();


};


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_spinBox_valueChanged(int arg1);

    void on_pushButton_clicked();
    void updateLabel(QString w);

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    int proc_amount = 1;
    QVector<ThreadInst*> theadsStorage;
    void run_proc();

};




#endif // MAINWINDOW_H


