#ifndef PILHA_H
#define PILHA_H
#define MAX 1000
#include<iostream>
template<typename P>
class Pilha{
    private:
        P v[MAX];
        int topo;
    public:
        Pilha(): topo(0){

        }

        bool empilha(P valor){
            if(topo == MAX){
                return false;
            }
            v[topo++] = valor;
            return true;
        }

        int desempilha(P valor){
              if(topo == 0){
                return 0;
              }


              if(valor){
                valor = v[--topo];
                return v[topo];
              }
            }

};






#endif // PILHA_H
