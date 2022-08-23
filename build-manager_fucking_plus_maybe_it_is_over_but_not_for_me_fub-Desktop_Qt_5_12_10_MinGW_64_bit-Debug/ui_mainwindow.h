/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionsign_out;
    QAction *actionsign_in;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menusign_out;
    QMenu *menusign_in;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionsign_out = new QAction(MainWindow);
        actionsign_out->setObjectName(QString::fromUtf8("actionsign_out"));
        actionsign_in = new QAction(MainWindow);
        actionsign_in->setObjectName(QString::fromUtf8("actionsign_in"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menusign_out = new QMenu(menubar);
        menusign_out->setObjectName(QString::fromUtf8("menusign_out"));
        menusign_in = new QMenu(menubar);
        menusign_in->setObjectName(QString::fromUtf8("menusign_in"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menusign_in->menuAction());
        menubar->addAction(menusign_out->menuAction());
        menusign_out->addAction(actionsign_out);
        menusign_in->addAction(actionsign_in);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\350\201\214\345\267\245\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        actionsign_out->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272\347\250\213\345\272\217", nullptr));
        actionsign_in->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225\347\263\273\347\273\237", nullptr));
        menusign_out->setTitle(QApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        menusign_in->setTitle(QApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
