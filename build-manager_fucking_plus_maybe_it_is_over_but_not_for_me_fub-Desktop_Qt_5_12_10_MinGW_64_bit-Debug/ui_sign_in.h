/********************************************************************************
** Form generated from reading UI file 'sign_in.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGN_IN_H
#define UI_SIGN_IN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_sign_in
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox;
    QLineEdit *lineEdit;

    void setupUi(QDialog *sign_in)
    {
        if (sign_in->objectName().isEmpty())
            sign_in->setObjectName(QString::fromUtf8("sign_in"));
        sign_in->resize(510, 337);
        pushButton = new QPushButton(sign_in);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 280, 80, 20));
        pushButton_2 = new QPushButton(sign_in);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(410, 280, 80, 20));
        label = new QLabel(sign_in);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(290, 80, 121, 31));
        label_2 = new QLabel(sign_in);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 80, 141, 31));
        comboBox = new QComboBox(sign_in);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(90, 130, 72, 22));
        lineEdit = new QLineEdit(sign_in);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(280, 130, 113, 20));

        retranslateUi(sign_in);

        QMetaObject::connectSlotsByName(sign_in);
    } // setupUi

    void retranslateUi(QDialog *sign_in)
    {
        sign_in->setWindowTitle(QApplication::translate("sign_in", "\347\231\273\345\275\225...", nullptr));
        pushButton->setText(QApplication::translate("sign_in", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QApplication::translate("sign_in", "\345\217\226\346\266\210", nullptr));
        label->setText(QApplication::translate("sign_in", "\350\276\223\345\205\245\346\202\250\347\232\204\347\274\226\345\217\267\357\274\232", nullptr));
        label_2->setText(QApplication::translate("sign_in", "\351\200\211\346\213\251\346\202\250\347\232\204\350\264\246\346\210\267\347\261\273\345\236\213\357\274\232", nullptr));
        comboBox->setItemText(0, QApplication::translate("sign_in", "\350\201\214\345\267\245", nullptr));
        comboBox->setItemText(1, QApplication::translate("sign_in", "\347\256\241\347\220\206\345\221\230", nullptr));

    } // retranslateUi

};

namespace Ui {
    class sign_in: public Ui_sign_in {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGN_IN_H
