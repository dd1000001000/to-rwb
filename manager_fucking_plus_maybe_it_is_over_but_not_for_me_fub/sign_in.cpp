#include "sign_in.h"
#include "ui_sign_in.h"
sign_in::sign_in(QWidget *parent,QMap<int,Worker>nums) :
    QDialog(parent),
    ui(new Ui::sign_in)
{
    ui->setupUi(this);
    idnum=cur=-1;
    for(auto a:nums)
    workernum.push_back(a.idnum);
}

sign_in::~sign_in()
{
    delete ui;
}

void sign_in::on_pushButton_2_clicked()
{
    this->close();
}

void sign_in::on_pushButton_clicked()
{
    idnum=ui->lineEdit->text().toInt();
    cur=ui->comboBox->currentIndex();
    confirm cf(this);
    cf.exec();
    if(cf.ok==0)idnum=cur=-1;
    if(idnum>0&&cur==0)
    {
        if(!workernum.count(idnum))
        {
            cur=-1;
            QMessageBox::critical(this, "critical", "没有找到此职工!", QMessageBox::Yes);
        }

    }
    else if(cur==1)
    {
        if(idnum!=114514)//管理员口令114514
        {
            cur=-1;
            QMessageBox::critical(this, "critical", "管理员口令错误", QMessageBox::Yes);
        }
    }
    this->close();
}
