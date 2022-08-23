#ifndef WORK_H
#define WORK_H
#include <QDialog>
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
#include<qmap.h>
namespace Ui {
class work;
}

class work : public QDialog
{
    Q_OBJECT

public:
    explicit work(QWidget *parent = nullptr);
    ~work();
    QStandardItemModel * infomodel; //显示表格信息数据模型
    Worker w;//考进来就行
    void showsal();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::work *ui;
};

#endif // WORK_H
