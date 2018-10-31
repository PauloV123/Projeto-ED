#ifndef CADASTRO_H
#define CADASTRO_H

#include <QDialog>

namespace Ui {
class Cadastro;
}

class Cadastro : public QDialog
{
    Q_OBJECT

public:
    explicit Cadastro(QWidget *parent = nullptr);
    ~Cadastro();

private slots:
    void on_pushButton_clicked();

    void on_CadCPF_clicked();

private:
    Ui::Cadastro *ui;
};

#endif // CADASTRO_H
