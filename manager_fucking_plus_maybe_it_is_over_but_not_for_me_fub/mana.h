#ifndef MANA_H
#define MANA_H
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
#include"inputid.h"
#include"addworker.h"
#include"salary.h"
#include"readonlydelegate.h"
#include"confirm.h"
#include"cmp.h"
#include"showdiff.h"
#include <QDialog>
#include<qmap.h>
namespace Ui {
class mana;
}

class mana : public QDialog
{
    Q_OBJECT

public:
    explicit mana(workerlist,QWidget *parent = nullptr);
    ~mana();
    void showall();
    void showsal(int index);
    int current;//1员工，2工资
    void on_ShowInfotableView_changed();
    QStandardItemModel * infomodel; //显示表格信息数据模型
    workerlist nowlist;
private slots:
    void on_pushButton_8_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::mana *ui;
};

#endif // MANA_H
