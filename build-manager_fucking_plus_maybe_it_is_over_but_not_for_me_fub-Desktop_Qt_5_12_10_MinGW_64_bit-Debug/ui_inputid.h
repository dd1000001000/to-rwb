/********************************************************************************
** Form generated from reading UI file 'inputid.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTID_H
#define UI_INPUTID_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_inputid
{
public:
    QPushButton *pushButton_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *inputid)
    {
        if (inputid->objectName().isEmpty())
            inputid->setObjectName(QString::fromUtf8("inputid"));
        inputid->resize(438, 178);
        pushButton_2 = new QPushButton(inputid);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 100, 80, 20));
        label = new QLabel(inputid);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 70, 111, 20));
        lineEdit = new QLineEdit(inputid);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEnabled(true);
        lineEdit->setGeometry(QRect(160, 70, 113, 20));
        pushButton = new QPushButton(inputid);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 70, 80, 20));

        retranslateUi(inputid);

        QMetaObject::connectSlotsByName(inputid);
    } // setupUi

    void retranslateUi(QDialog *inputid)
    {
        inputid->setWindowTitle(QApplication::translate("inputid", "\350\257\267\350\276\223\345\205\245", nullptr));
        pushButton_2->setText(QApplication::translate("inputid", "\345\217\226\346\266\210", nullptr));
        label->setText(QApplication::translate("inputid", "\350\276\223\345\205\245\350\201\214\345\267\245\347\274\226\345\217\267:", nullptr));
        lineEdit->setText(QString());
        pushButton->setText(QApplication::translate("inputid", "\350\276\223\345\205\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class inputid: public Ui_inputid {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTID_H
