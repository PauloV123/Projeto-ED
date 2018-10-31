#include "mainwindow.h"
#include <QApplication>
#include <filacircular.h>
#include <ldde.h>
#include <pilha.h>

int main(int argc, char *argv[])
{

    Pilha<int> P;
    P.empilha(5);


    LDDE<int> L;
    L.insere(15);

    FilaCirc<int> F;
    F.enfileira(1);
    F.mostraFilaCirc();
    QApplication a(argc, argv);
    a.setStyle("fusion");
    MainWindow w;

    w.show();

    return a.exec();
}
