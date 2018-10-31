#ifndef PILHA_H
#define PILHA_H
#define MAX 10

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

        bool desempilha(P* des = NULL){
            if(topo == 0){
                return false;
            }

            if(des){
                *des = v[--topo];
                return true;
            }
        }

};






#endif // PILHA_H
