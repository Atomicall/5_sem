/********************************************************************************
** Form generated from reading UI file 'da_window.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DA_WINDOW_H
#define UI_DA_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Da_window
{
public:
    QWidget *centralwidget;
    QGroupBox *MainGroupBox;
    QTableView *DB_Table;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Add_Button;
    QPushButton *Delete_Button;
    QPushButton *Revert_Button;
    QPushButton *Submit_All;
    QLineEdit *status_LineEdit;
    QLabel *status_Label;
    QLabel *DB_Status_Label;
    QLineEdit *DB_Status_LineEdit;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *Sort_By_ComboBox;
    QPushButton *Show_On;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Da_window)
    {
        if (Da_window->objectName().isEmpty())
            Da_window->setObjectName(QString::fromUtf8("Da_window"));
        Da_window->resize(818, 481);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Da_window->sizePolicy().hasHeightForWidth());
        Da_window->setSizePolicy(sizePolicy);
        Da_window->setMinimumSize(QSize(818, 481));
        Da_window->setMaximumSize(QSize(818, 481));
        centralwidget = new QWidget(Da_window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        MainGroupBox = new QGroupBox(centralwidget);
        MainGroupBox->setObjectName(QString::fromUtf8("MainGroupBox"));
        MainGroupBox->setGeometry(QRect(0, 0, 821, 409));
        sizePolicy1.setHeightForWidth(MainGroupBox->sizePolicy().hasHeightForWidth());
        MainGroupBox->setSizePolicy(sizePolicy1);
        MainGroupBox->setFlat(true);
        DB_Table = new QTableView(MainGroupBox);
        DB_Table->setObjectName(QString::fromUtf8("DB_Table"));
        DB_Table->setGeometry(QRect(10, 20, 801, 291));
        sizePolicy1.setHeightForWidth(DB_Table->sizePolicy().hasHeightForWidth());
        DB_Table->setSizePolicy(sizePolicy1);
        horizontalLayoutWidget = new QWidget(MainGroupBox);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 310, 801, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Add_Button = new QPushButton(horizontalLayoutWidget);
        Add_Button->setObjectName(QString::fromUtf8("Add_Button"));

        horizontalLayout->addWidget(Add_Button);

        Delete_Button = new QPushButton(horizontalLayoutWidget);
        Delete_Button->setObjectName(QString::fromUtf8("Delete_Button"));

        horizontalLayout->addWidget(Delete_Button);

        Revert_Button = new QPushButton(horizontalLayoutWidget);
        Revert_Button->setObjectName(QString::fromUtf8("Revert_Button"));

        horizontalLayout->addWidget(Revert_Button);

        Submit_All = new QPushButton(horizontalLayoutWidget);
        Submit_All->setObjectName(QString::fromUtf8("Submit_All"));

        horizontalLayout->addWidget(Submit_All);

        status_LineEdit = new QLineEdit(MainGroupBox);
        status_LineEdit->setObjectName(QString::fromUtf8("status_LineEdit"));
        status_LineEdit->setGeometry(QRect(150, 380, 451, 20));
        status_LineEdit->setReadOnly(true);
        status_LineEdit->setClearButtonEnabled(false);
        status_Label = new QLabel(MainGroupBox);
        status_Label->setObjectName(QString::fromUtf8("status_Label"));
        status_Label->setGeometry(QRect(20, 380, 81, 20));
        DB_Status_Label = new QLabel(centralwidget);
        DB_Status_Label->setObjectName(QString::fromUtf8("DB_Status_Label"));
        DB_Status_Label->setGeometry(QRect(20, 410, 101, 16));
        DB_Status_LineEdit = new QLineEdit(centralwidget);
        DB_Status_LineEdit->setObjectName(QString::fromUtf8("DB_Status_LineEdit"));
        DB_Status_LineEdit->setGeometry(QRect(150, 410, 141, 20));
        DB_Status_LineEdit->setReadOnly(true);
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(300, 410, 161, 22));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        Sort_By_ComboBox = new QComboBox(formLayoutWidget);
        Sort_By_ComboBox->setObjectName(QString::fromUtf8("Sort_By_ComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, Sort_By_ComboBox);

        Show_On = new QPushButton(centralwidget);
        Show_On->setObjectName(QString::fromUtf8("Show_On"));
        Show_On->setGeometry(QRect(480, 410, 121, 23));
        Da_window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Da_window);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 818, 21));
        Da_window->setMenuBar(menubar);
        statusbar = new QStatusBar(Da_window);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Da_window->setStatusBar(statusbar);

        retranslateUi(Da_window);

        QMetaObject::connectSlotsByName(Da_window);
    } // setupUi

    void retranslateUi(QMainWindow *Da_window)
    {
        Da_window->setWindowTitle(QCoreApplication::translate("Da_window", "Da_window", nullptr));
        MainGroupBox->setTitle(QString());
        Add_Button->setText(QCoreApplication::translate("Da_window", "Add Record", nullptr));
        Delete_Button->setText(QCoreApplication::translate("Da_window", "Delete Record", nullptr));
        Revert_Button->setText(QCoreApplication::translate("Da_window", "Revert", nullptr));
        Submit_All->setText(QCoreApplication::translate("Da_window", "Submit_All", nullptr));
        status_Label->setText(QCoreApplication::translate("Da_window", "Current Status", nullptr));
        DB_Status_Label->setText(QCoreApplication::translate("Da_window", "DataBase Status", nullptr));
        label->setText(QCoreApplication::translate("Da_window", "Sort By:", nullptr));
        Show_On->setText(QCoreApplication::translate("Da_window", "Show On", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Da_window: public Ui_Da_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DA_WINDOW_H
