#ifndef DA_WINDOW_H
#define DA_WINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Da_window; }
QT_END_NAMESPACE

class Da_window : public QMainWindow
{
    Q_OBJECT

public:
    Da_window(QWidget *parent = nullptr);
    ~Da_window();

private:
    Ui::Da_window *ui;
};
#endif // DA_WINDOW_H
