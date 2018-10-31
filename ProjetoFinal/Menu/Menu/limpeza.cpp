#include "limpeza.h"
#include "ui_limpeza.h"
#include "pilha.h"
#include "mainwindow.h"
Limpeza::Limpeza(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Limpeza)
{
    ui->setupUi(this);
}

Limpeza::~Limpeza()
{
    delete ui;
}


static int i = 0;
static int j = 10;
void Limpeza::on_Atualiza_clicked()
{
    Pilha<int> p;

    p.empilha(i);
    ui->indo->setText(QString::number(i));
    i++;
    int sub = 1;

    if(i == 11){
        i = i - sub;
        sub++;
        p.desempilha(j);
        ui->voltando->setText(QString::number(j));
        j--;
    }


}
