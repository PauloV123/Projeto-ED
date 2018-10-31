#ifndef LIMPEZA_H
#define LIMPEZA_H
#include "mainwindow.h"
#include <QDialog>

namespace Ui {
class Limpeza;
}

class Limpeza : public QDialog
{
    Q_OBJECT

public:
    explicit Limpeza(QWidget *parent = nullptr);
    ~Limpeza();

private slots:


    void on_Atualiza_clicked();

private:
    Ui::Limpeza *ui;
};

#endif // LIMPEZA_H
