#include "work.h"
#include "ui_work.h"

work::work(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::work)
{
    ui->setupUi(this);
    infomodel=new QStandardItemModel();
    ui->showworkers->setModel(infomodel);
}

work::~work()
{
    delete ui;
}

void work::on_pushButton_clicked()
{
    showsal();
}

void work::showsal()
{
    infomodel->clear();
    infomodel->setColumnCount(11);
    QStringList templist;
    templist.append("实发数");
    templist.append("基本工资");
    templist.append("岗位工资");
    templist.append("工龄工资");
    templist.append("津贴");
    templist.append("岗贴");
    templist.append("补贴");
    templist.append("房贴");
    templist.append("交通补贴");
    templist.append("总和");
    templist.append("应交税");
    infomodel->setHorizontalHeaderLabels(templist);
    infomodel->setRowCount(12);//12个月
    QStandardItem *aTempItem; //临时的item
    QString tempStr;
    for(int i=0;i<12;i++)
    {
        salary tmp=w.workersalary[i+1];
        tempStr=QString::number(tmp.base.bs1);
        aTempItem = new QStandardItem(tempStr);
        infomodel->setItem(i,1,aTempItem);
        tempStr=QString::number(tmp.base.bs2);
        aTempItem = new QStandardItem(tempStr);
        infomodel->setItem(i,2,aTempItem);
        tempStr=QString::number(tmp.base.bs3);
        aTempItem = new QStandardItem(tempStr);
        infomodel->setItem(i,3,aTempItem);
        tempStr=QString::number(tmp.extra.es1);
        aTempItem = new QStandardItem(tempStr);
        infomodel->setItem(i,4,aTempItem);
        tempStr=QString::number(tmp.extra.es2);
        aTempItem = new QStandardItem(tempStr);
        infomodel->setItem(i,5,aTempItem);
        tempStr=QString::number(tmp.extra.es3);
        aTempItem = new QStandardItem(tempStr);
        infomodel->setItem(i,6,aTempItem);
        tempStr=QString::number(tmp.extra.es4);
        aTempItem = new QStandardItem(tempStr);
        infomodel->setItem(i,7,aTempItem);
        tempStr=QString::number(tmp.extra.es5);
        aTempItem = new QStandardItem(tempStr);
        infomodel->setItem(i,8,aTempItem);
        tempStr=QString::number(tmp.sum);
        aTempItem = new QStandardItem(tempStr);
        infomodel->setItem(i,9,aTempItem);
        tempStr=QString::number(tmp.tax);
        aTempItem = new QStandardItem(tempStr);
        infomodel->setItem(i,10,aTempItem);
        double left=tmp.sum-tmp.tax;
        tempStr=QString::number(left);
        aTempItem = new QStandardItem(tempStr);
        infomodel->setItem(i,0,aTempItem);
    }
    ReadOnlyDelegate* readOnlyDelegate = new ReadOnlyDelegate(this);
    for(int i=0;i<=10;i++)
         ui->showworkers->setItemDelegateForColumn(i, readOnlyDelegate);
}

void work::on_pushButton_2_clicked()
{
    this->close();
}
