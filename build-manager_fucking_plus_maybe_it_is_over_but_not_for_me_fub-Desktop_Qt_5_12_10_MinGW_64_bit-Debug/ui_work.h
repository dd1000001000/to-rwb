/********************************************************************************
** Form generated from reading UI file 'work.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORK_H
#define UI_WORK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_work
{
public:
    QTableView *showworkers;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *work)
    {
        if (work->objectName().isEmpty())
            work->setObjectName(QString::fromUtf8("work"));
        work->resize(1600, 1200);
        showworkers = new QTableView(work);
        showworkers->setObjectName(QString::fromUtf8("showworkers"));
        showworkers->setGeometry(QRect(0, 50, 1600, 1150));
        pushButton = new QPushButton(work);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 0, 181, 51));
        pushButton_2 = new QPushButton(work);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(1489, 0, 111, 51));

        retranslateUi(work);

        QMetaObject::connectSlotsByName(work);
    } // setupUi

    void retranslateUi(QDialog *work)
    {
        work->setWindowTitle(QApplication::translate("work", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("work", "\346\237\245\347\234\213\346\210\221\347\232\204\345\267\245\350\265\204", nullptr));
        pushButton_2->setText(QApplication::translate("work", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class work: public Ui_work {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORK_H
