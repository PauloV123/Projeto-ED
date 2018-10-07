#include "checkin.h"
#include "ui_checkin.h"
#include <QMessageBox>
CheckIn::CheckIn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CheckIn)
{
    ui->setupUi(this);
}

CheckIn::~CheckIn()
{
    delete ui;
}

void CheckIn::on_pushButton_clicked()
{
    QMessageBox::information(this,"title","Check In concluido!");
}
