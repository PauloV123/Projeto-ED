#include "limpeza.h"
#include "ui_limpeza.h"

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
