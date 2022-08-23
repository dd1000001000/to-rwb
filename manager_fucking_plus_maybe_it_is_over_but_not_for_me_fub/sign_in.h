#ifndef SIGN_IN_H
#define SIGN_IN_H
#include <qfile.h>
#include <QDialog>
#include<QVector>
#include <QTextStream>
#include <QTextCodec>
#include"confirm.h"
#include<qmessagebox.h>
#include<QMap>
#include<qdebug.h>
#include"worker.h"
namespace Ui {
class sign_in;
}

class sign_in : public QDialog
{
    Q_OBJECT

public:
    explicit sign_in(QWidget *parent = nullptr,QMap<int,Worker>nums=QMap<int,Worker>());
    ~sign_in();
    int idnum;
    int cur;//代表是员工还是
    QVector<int>workernum;
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::sign_in *ui;
};

#endif // SIGN_IN_H
