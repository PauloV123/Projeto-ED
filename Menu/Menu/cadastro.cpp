#include "cadastro.h"
#include "ui_cadastro.h"
#include<QFile>
#include<QTextStream>
#include<QMessageBox>
Cadastro::Cadastro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Cadastro)
{
    ui->setupUi(this);
    ui->cpf->setText("");
}

Cadastro::~Cadastro()
{
    delete ui;
}

void Cadastro::on_pushButton_clicked()
{
    //aqui ta abrindo na minha pasta de usuario, pra abrir na sua é só colocar a sua pasta no lugar de "paulo"
    QFile file("C:/Users/paulo/Documents/Menu/Pasta de Cadastro/Cadastro.txt");

    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this,"title","FILE NOT OPEN");
    }
    QTextStream out(&file);
    QString text = ui->plainTextEdit->toPlainText();
    out << text;
    file.flush();
    file.close();
    QMessageBox::information(this,"title","Cadastro concluido!");



}

void Cadastro::on_CadCPF_clicked()
{
    ui->cpf->setText(QString::number(ui->cp->value()));
}
