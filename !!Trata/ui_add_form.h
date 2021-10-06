/********************************************************************************
** Form generated from reading UI file 'add_form.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_FORM_H
#define UI_ADD_FORM_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Add_Form
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *Dep_Label;
    QLineEdit *Dep_LineEdit;
    QLabel *Arrival_Label;
    QLineEdit *Arrival_LineEdit;
    QLabel *Dep_Date_Label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QDateEdit *Dep_Date_dateEdit;
    QLabel *Dep_Time_Label;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QTimeEdit *Dep_Time_LineEdit;
    QLabel *Travel_TimeLineEdit;
    QLineEdit *Trave_lTime_LineEdit;
    QLabel *Seat_Amount_Lineedit;
    QLineEdit *Seat_Amount_LineEdit;
    QLabel *Seat_Free_Label;
    QLineEdit *Seat_Free_Lineedit;
    QLabel *Cost_Label;
    QLineEdit *Cost_LineEdit;
    QPushButton *Save_Button;
    QPushButton *Discard_Button;

    void setupUi(QWidget *Add_Form)
    {
        if (Add_Form->objectName().isEmpty())
            Add_Form->setObjectName(QString::fromUtf8("Add_Form"));
        Add_Form->resize(341, 247);
        formLayoutWidget = new QWidget(Add_Form);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 316, 208));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        Dep_Label = new QLabel(formLayoutWidget);
        Dep_Label->setObjectName(QString::fromUtf8("Dep_Label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, Dep_Label);

        Dep_LineEdit = new QLineEdit(formLayoutWidget);
        Dep_LineEdit->setObjectName(QString::fromUtf8("Dep_LineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, Dep_LineEdit);

        Arrival_Label = new QLabel(formLayoutWidget);
        Arrival_Label->setObjectName(QString::fromUtf8("Arrival_Label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, Arrival_Label);

        Arrival_LineEdit = new QLineEdit(formLayoutWidget);
        Arrival_LineEdit->setObjectName(QString::fromUtf8("Arrival_LineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, Arrival_LineEdit);

        Dep_Date_Label = new QLabel(formLayoutWidget);
        Dep_Date_Label->setObjectName(QString::fromUtf8("Dep_Date_Label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, Dep_Date_Label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Dep_Date_dateEdit = new QDateEdit(formLayoutWidget);
        Dep_Date_dateEdit->setObjectName(QString::fromUtf8("Dep_Date_dateEdit"));
        Dep_Date_dateEdit->setAutoFillBackground(false);
        Dep_Date_dateEdit->setWrapping(false);
        Dep_Date_dateEdit->setReadOnly(false);
        Dep_Date_dateEdit->setMaximumDateTime(QDateTime(QDate(2100, 12, 31), QTime(23, 59, 59)));
        Dep_Date_dateEdit->setMinimumDateTime(QDateTime(QDate(2021, 1, 1), QTime(23, 59, 59)));
        Dep_Date_dateEdit->setMaximumDate(QDate(2100, 12, 31));
        Dep_Date_dateEdit->setMinimumDate(QDate(2021, 1, 1));
        Dep_Date_dateEdit->setCurrentSection(QDateTimeEdit::DaySection);
        Dep_Date_dateEdit->setCalendarPopup(false);

        horizontalLayout->addWidget(Dep_Date_dateEdit);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout);

        Dep_Time_Label = new QLabel(formLayoutWidget);
        Dep_Time_Label->setObjectName(QString::fromUtf8("Dep_Time_Label"));

        formLayout->setWidget(3, QFormLayout::LabelRole, Dep_Time_Label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        Dep_Time_LineEdit = new QTimeEdit(formLayoutWidget);
        Dep_Time_LineEdit->setObjectName(QString::fromUtf8("Dep_Time_LineEdit"));
        Dep_Time_LineEdit->setDateTime(QDateTime(QDate(2000, 1, 8), QTime(0, 0, 0)));
        Dep_Time_LineEdit->setMinimumTime(QTime(0, 0, 0));

        horizontalLayout_2->addWidget(Dep_Time_LineEdit);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout_2);

        Travel_TimeLineEdit = new QLabel(formLayoutWidget);
        Travel_TimeLineEdit->setObjectName(QString::fromUtf8("Travel_TimeLineEdit"));

        formLayout->setWidget(4, QFormLayout::LabelRole, Travel_TimeLineEdit);

        Trave_lTime_LineEdit = new QLineEdit(formLayoutWidget);
        Trave_lTime_LineEdit->setObjectName(QString::fromUtf8("Trave_lTime_LineEdit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, Trave_lTime_LineEdit);

        Seat_Amount_Lineedit = new QLabel(formLayoutWidget);
        Seat_Amount_Lineedit->setObjectName(QString::fromUtf8("Seat_Amount_Lineedit"));

        formLayout->setWidget(5, QFormLayout::LabelRole, Seat_Amount_Lineedit);

        Seat_Amount_LineEdit = new QLineEdit(formLayoutWidget);
        Seat_Amount_LineEdit->setObjectName(QString::fromUtf8("Seat_Amount_LineEdit"));

        formLayout->setWidget(5, QFormLayout::FieldRole, Seat_Amount_LineEdit);

        Seat_Free_Label = new QLabel(formLayoutWidget);
        Seat_Free_Label->setObjectName(QString::fromUtf8("Seat_Free_Label"));

        formLayout->setWidget(6, QFormLayout::LabelRole, Seat_Free_Label);

        Seat_Free_Lineedit = new QLineEdit(formLayoutWidget);
        Seat_Free_Lineedit->setObjectName(QString::fromUtf8("Seat_Free_Lineedit"));

        formLayout->setWidget(6, QFormLayout::FieldRole, Seat_Free_Lineedit);

        Cost_Label = new QLabel(formLayoutWidget);
        Cost_Label->setObjectName(QString::fromUtf8("Cost_Label"));

        formLayout->setWidget(7, QFormLayout::LabelRole, Cost_Label);

        Cost_LineEdit = new QLineEdit(formLayoutWidget);
        Cost_LineEdit->setObjectName(QString::fromUtf8("Cost_LineEdit"));

        formLayout->setWidget(7, QFormLayout::FieldRole, Cost_LineEdit);

        Save_Button = new QPushButton(Add_Form);
        Save_Button->setObjectName(QString::fromUtf8("Save_Button"));
        Save_Button->setGeometry(QRect(170, 220, 75, 23));
        Discard_Button = new QPushButton(Add_Form);
        Discard_Button->setObjectName(QString::fromUtf8("Discard_Button"));
        Discard_Button->setGeometry(QRect(250, 220, 75, 23));

        retranslateUi(Add_Form);

        QMetaObject::connectSlotsByName(Add_Form);
    } // setupUi

    void retranslateUi(QWidget *Add_Form)
    {
        Add_Form->setWindowTitle(QCoreApplication::translate("Add_Form", "Form", nullptr));
        Dep_Label->setText(QCoreApplication::translate("Add_Form", "Departue", nullptr));
        Arrival_Label->setText(QCoreApplication::translate("Add_Form", "Arrival", nullptr));
        Dep_Date_Label->setText(QCoreApplication::translate("Add_Form", "Departue Date", nullptr));
        Dep_Time_Label->setText(QCoreApplication::translate("Add_Form", "Departue Time", nullptr));
        Travel_TimeLineEdit->setText(QCoreApplication::translate("Add_Form", "Travel Time", nullptr));
        Seat_Amount_Lineedit->setText(QCoreApplication::translate("Add_Form", "Seat Amount", nullptr));
        Seat_Free_Label->setText(QCoreApplication::translate("Add_Form", "Seat Free", nullptr));
        Cost_Label->setText(QCoreApplication::translate("Add_Form", "Cost", nullptr));
        Save_Button->setText(QCoreApplication::translate("Add_Form", "Save", nullptr));
        Discard_Button->setText(QCoreApplication::translate("Add_Form", "Discard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add_Form: public Ui_Add_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_FORM_H
