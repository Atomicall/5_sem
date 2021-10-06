/********************************************************************************
** Form generated from reading UI file 'show_on_form.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOW_ON_FORM_H
#define UI_SHOW_ON_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Show_On_form
{
public:
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QDateEdit *dateEdit;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QTimeEdit *timeEdit;
    QTableView *tableView;
    QPushButton *pushButton;

    void setupUi(QWidget *Show_On_form)
    {
        if (Show_On_form->objectName().isEmpty())
            Show_On_form->setObjectName(QString::fromUtf8("Show_On_form"));
        Show_On_form->resize(711, 274);
        Show_On_form->setMinimumSize(QSize(711, 274));
        Show_On_form->setMaximumSize(QSize(711, 274));
        label = new QLabel(Show_On_form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 51, 16));
        formLayoutWidget = new QWidget(Show_On_form);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 20, 160, 22));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        dateEdit = new QDateEdit(formLayoutWidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setMinimumDateTime(QDateTime(QDate(2021, 1, 1), QTime(0, 0, 0)));
        dateEdit->setCurrentSection(QDateTimeEdit::DaySection);

        formLayout->setWidget(0, QFormLayout::FieldRole, dateEdit);

        formLayoutWidget_2 = new QWidget(Show_On_form);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(180, 20, 160, 22));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(formLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        timeEdit = new QTimeEdit(formLayoutWidget_2);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setCurrentSection(QDateTimeEdit::HourSection);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, timeEdit);

        tableView = new QTableView(Show_On_form);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 50, 691, 221));
        pushButton = new QPushButton(Show_On_form);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(620, 20, 75, 23));

        retranslateUi(Show_On_form);

        QMetaObject::connectSlotsByName(Show_On_form);
    } // setupUi

    void retranslateUi(QWidget *Show_On_form)
    {
        Show_On_form->setWindowTitle(QCoreApplication::translate("Show_On_form", "Form", nullptr));
        label->setText(QCoreApplication::translate("Show_On_form", "Show On:", nullptr));
        label_2->setText(QCoreApplication::translate("Show_On_form", "Day", nullptr));
        label_3->setText(QCoreApplication::translate("Show_On_form", "Time", nullptr));
        pushButton->setText(QCoreApplication::translate("Show_On_form", "Show", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Show_On_form: public Ui_Show_On_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOW_ON_FORM_H
