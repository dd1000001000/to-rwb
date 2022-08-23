#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionsign_out_triggered()
{
    QApplication::exit();//退出程序
}

void MainWindow::on_actionsign_in_triggered()
{
    sign_in si(this,nowlist.mp);
    si.exec();
    if(si.cur==1)
    {
        //管理员
        mana ma(nowlist,this);
        ma.exec();
        nowlist=ma.nowlist;
        si.cur=-1;
    }
    else if(si.cur==0)
    {
        //职工
        work wo(this);
        wo.w=nowlist.mp[si.idnum];
        wo.exec();
        si.cur=-1;
    }
}
