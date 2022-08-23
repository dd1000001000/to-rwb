#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include<QDebug>
#include "ui_mainwindow.h"
#include "qdir.h"
#include "qfiledialog.h"
#include <QStandardItem>
#include <qvariant.h>
#include <QMessageBox>
#include <QAbstractItemDelegate>
#include <QModelIndex>
#include"workerlist.h"
#include"sign_in.h"
#include"salary.h"
#include"readonlydelegate.h"
#include"confirm.h"
#include<QMap>
#include <QMainWindow>
#include"mana.h"
#include"work.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionsign_out_triggered();

    void on_actionsign_in_triggered();

private:
    Ui::MainWindow *ui;
    workerlist nowlist; //数据汇总类
};
#endif // MAINWINDOW_H
