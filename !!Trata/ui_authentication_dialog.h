/********************************************************************************
** Form generated from reading UI file 'authentication_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHENTICATION_DIALOG_H
#define UI_AUTHENTICATION_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Authentication_dialog
{
public:
    QGroupBox *groupBox;
    QLineEdit *login_LineEdit;
    QLineEdit *pass_LineEdit;
    QLabel *login_Label;
    QLabel *pass_Label;
    QDialogButtonBox *DialogButtonBox;

    void setupUi(QDialog *Authentication_dialog)
    {
        if (Authentication_dialog->objectName().isEmpty())
            Authentication_dialog->setObjectName(QString::fromUtf8("Authentication_dialog"));
        Authentication_dialog->setEnabled(true);
        Authentication_dialog->resize(176, 153);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Authentication_dialog->sizePolicy().hasHeightForWidth());
        Authentication_dialog->setSizePolicy(sizePolicy);
        Authentication_dialog->setMinimumSize(QSize(1, 0));
        Authentication_dialog->setMaximumSize(QSize(256, 256));
        groupBox = new QGroupBox(Authentication_dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 171, 151));
        login_LineEdit = new QLineEdit(groupBox);
        login_LineEdit->setObjectName(QString::fromUtf8("login_LineEdit"));
        login_LineEdit->setGeometry(QRect(10, 30, 151, 20));
        pass_LineEdit = new QLineEdit(groupBox);
        pass_LineEdit->setObjectName(QString::fromUtf8("pass_LineEdit"));
        pass_LineEdit->setGeometry(QRect(10, 80, 151, 20));
        pass_LineEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);
        login_Label = new QLabel(groupBox);
        login_Label->setObjectName(QString::fromUtf8("login_Label"));
        login_Label->setGeometry(QRect(10, 10, 47, 13));
        pass_Label = new QLabel(groupBox);
        pass_Label->setObjectName(QString::fromUtf8("pass_Label"));
        pass_Label->setGeometry(QRect(10, 60, 71, 16));
        DialogButtonBox = new QDialogButtonBox(groupBox);
        DialogButtonBox->setObjectName(QString::fromUtf8("DialogButtonBox"));
        DialogButtonBox->setGeometry(QRect(10, 110, 151, 31));
        DialogButtonBox->setOrientation(Qt::Horizontal);
        DialogButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(Authentication_dialog);

        QMetaObject::connectSlotsByName(Authentication_dialog);
    } // setupUi

    void retranslateUi(QDialog *Authentication_dialog)
    {
        Authentication_dialog->setWindowTitle(QCoreApplication::translate("Authentication_dialog", "Dialog", nullptr));
        groupBox->setTitle(QString());
        login_Label->setText(QCoreApplication::translate("Authentication_dialog", "Login", nullptr));
        pass_Label->setText(QCoreApplication::translate("Authentication_dialog", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Authentication_dialog: public Ui_Authentication_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHENTICATION_DIALOG_H
