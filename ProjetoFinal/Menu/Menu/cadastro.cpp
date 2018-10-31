#include "cadastro.h"
#include "ui_cadastro.h"
#include<QFile>
#include<QTextStream>
#include<QMessageBox>
#include"ldde.h"

QString local = "C:/Users/paulo/Documents/Menu/Pasta de Cadastro";
QString nome = "Cadastrar.txt";

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


void Cadastro::on_CadCPF_clicked()
{
    ldde<int> L;
    ui->cpf->setText(QString::number(ui->cp->value()));
    L.insereLDDE(ui->cp->value());


}

void Cadastro::on_cadastra_clicked()
{
    //aqui ta abrindo na minha pasta de usuario, pra abrir na sua é só colocar a sua pasta no lugar de "paulo"
    QFile file(local+nome);

    if(!file.open(QFile::Append | QFile::Text)){
        QMessageBox::warning(this,"title","FILE NOT OPEN");
    }
    QTextStream out(&file);
    QString text = ui->plainTextEdit->toPlainText();
    out << text << endl;
    out<<endl;
    file.flush();
    file.close();

    QMessageBox::information(this,"title","Cadastro concluido!");
}
