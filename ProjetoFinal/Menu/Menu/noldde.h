#ifndef NOLDDE_H
#define NOLDDE_H
#include <iostream>

class LDDE;
template<typename L>

class Noldde{
    public:
        L conteudo;
        Noldde<L>* proximo;
        Noldde<L>* anterior;

        Noldde(L conteudo): conteudo(conteudo), proximo(NULL), anterior(NULL){

        }
        friend class LDDE;
};
#endif // NOLDDE_H
