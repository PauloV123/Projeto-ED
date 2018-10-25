#include "checkout.h"
#include "ui_checkout.h"
#include <QMessageBox>
CheckOut::CheckOut(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CheckOut)
{
    ui->setupUi(this);
}

CheckOut::~CheckOut()
{
    delete ui;
}

void CheckOut::on_pushButton_clicked()
{
    QMessageBox::information(this,"title","Check Out concluido!");
}
