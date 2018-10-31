#include "checkout.h"
#include "ui_checkout.h"
#include <QMessageBox>
#include<ldde.h>
#include<filacircular.h>
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


void CheckOut::on_CheckO_clicked()
{
    ldde<int> L;
    FilaCirc<int> F;
    L.removeLDDE(ui->out->value());
    F.desenfileira(ui->quarto->value());
    QMessageBox::information(this,"title","Check Out concluido!");
}
