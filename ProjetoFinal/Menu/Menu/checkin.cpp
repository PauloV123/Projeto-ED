#include "checkin.h"
#include "ui_checkin.h"
#include <QMessageBox>
#include "cadastro.h"
#include<QTextStream>
#include<QFile>
#include<conio.h>
#include<filacircular.h>
#include<ldde.h>

QString local2 = "C:/Users/paulo/Documents/Menu/Pasta de Cadastro";
QString nome2 = "Cadastrar.txt";

CheckIn::CheckIn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CheckIn)
{
    ui->setupUi(this);
    ui->teste->setText("-------------------");
}

CheckIn::~CheckIn()
{
    delete ui;
}


void CheckIn::on_Check_clicked()
{
    int resp;

    resp = rand() % 10;
    ui->teste->setText(QString::number(resp));

    FilaCirc<int> F;
    F.enfileira(resp);
    QMessageBox::information(this,"title","Check In concluido!", resp);



}

void CheckIn::on_Cadastrados_clicked()
{
    QFile file(local2+nome2);

    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this,"title","FILE NOT OPEN");
    }
    QTextStream entra(&file);
    QString text = entra.readAll();
    ui->Leitura->setPlainText(text);

    file.close();
}
