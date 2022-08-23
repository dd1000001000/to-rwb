/********************************************************************************
** Form generated from reading UI file 'mana.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANA_H
#define UI_MANA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_mana
{
public:
    QTableView *showworkers;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;

    void setupUi(QDialog *mana)
    {
        if (mana->objectName().isEmpty())
            mana->setObjectName(QString::fromUtf8("mana"));
        mana->resize(1600, 1200);
        showworkers = new QTableView(mana);
        showworkers->setObjectName(QString::fromUtf8("showworkers"));
        showworkers->setGeometry(QRect(0, 100, 1600, 1100));
        pushButton = new QPushButton(mana);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 20, 80, 20));
        pushButton_2 = new QPushButton(mana);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 60, 80, 20));
        pushButton_3 = new QPushButton(mana);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(210, 0, 80, 20));
        pushButton_4 = new QPushButton(mana);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(210, 80, 80, 20));
        pushButton_5 = new QPushButton(mana);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(380, 0, 80, 20));
        pushButton_6 = new QPushButton(mana);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(380, 80, 80, 20));
        pushButton_7 = new QPushButton(mana);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(550, 40, 80, 20));
        pushButton_8 = new QPushButton(mana);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(1250, 40, 80, 20));

        retranslateUi(mana);

        QMetaObject::connectSlotsByName(mana);
    } // setupUi

    void retranslateUi(QDialog *mana)
    {
        mana->setWindowTitle(QApplication::translate("mana", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("mana", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
        pushButton_2->setText(QApplication::translate("mana", "\344\277\235\345\255\230\346\226\207\344\273\266", nullptr));
        pushButton_3->setText(QApplication::translate("mana", "\346\267\273\345\212\240\350\201\214\345\267\245", nullptr));
        pushButton_4->setText(QApplication::translate("mana", "\345\210\240\351\231\244\350\201\214\345\267\245", nullptr));
        pushButton_5->setText(QApplication::translate("mana", "\346\230\276\347\244\272\350\201\214\345\267\245", nullptr));
        pushButton_6->setText(QApplication::translate("mana", "\344\277\256\346\224\271\345\267\245\350\265\204", nullptr));
        pushButton_7->setText(QApplication::translate("mana", "\345\267\245\350\265\204\345\257\271\346\257\224", nullptr));
        pushButton_8->setText(QApplication::translate("mana", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mana: public Ui_mana {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANA_H
