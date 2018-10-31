#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "cadastro.h"
#include "checkin.h"
#include "checkout.h"
#include "limpeza.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}



MainWindow::~MainWindow()
{
    delete ui;

}



void MainWindow::on_actionCadastro_triggered()
{
    Cadastro cadastro;
    cadastro.setModal(true);
    cadastro.exec();




}

void MainWindow::on_actionCheck_In_triggered()
{
    CheckIn checkin;
    checkin.setModal(true);
    checkin.exec();



}

void MainWindow::on_actionCheck_out_triggered()
{
    CheckOut checkout;
    checkout.setModal(true);
    checkout.exec();
}

void MainWindow::on_actionFaxineira_triggered()
{
    Limpeza limpeza;
    limpeza.setModal(true);
    limpeza.exec();
}
