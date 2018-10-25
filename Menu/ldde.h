
#ifndef LDDE_H
#define LDDE_H
#include <iostream>
#include "noldde.h"
using namespace std;
template <typename L>

class LDDE{
    private:
        Noldde<L>* primeiro;
        Noldde<L>* ultimo;
        int n;
    public:
        LDDE(): primeiro(NULL), ultimo(NULL), n(0){

        }

        bool insere(L valor){
            Noldde<L>* novo = new Noldde<L>(valor);
            if(novo == NULL){
                return false;
            }

            Noldde<L>* ptrAnterior = NULL;
            Noldde<L>* ptrAtual = primeiro;

            while(ptrAtual && ptrAtual->conteudo < valor){
                ptrAnterior = ptrAtual;
                ptrAtual = ptrAtual->proximo;
            }

            novo->anterior = ptrAnterior;

            if(ptrAnterior){
                ptrAnterior->proximo = novo;
            }
            else{
                primeiro = novo;
            }

            novo->proximo = ptrAtual;

            if(ptrAtual){
                ptrAtual->anterior = novo;
            }
            else{
                ultimo = novo;
            }
            n++;
            return true;
        }

        void imprime(){
            Noldde<L>* ponteiro = primeiro;
            while(ponteiro){
                cout << ponteiro->conteudo << " ";
                ponteiro = ponteiro->proximo;
            }
            cout<<endl;
        }

        bool remove(L valor){
            Noldde<L>* ptrAtual = primeiro;

            while(ptrAtual && ptrAtual->conteudo < valor){
                ptrAtual = ptrAtual->proximo;
            }

            if(!ptrAtual || ptrAtual->conteudo != valor){
                return false;
            }

            Noldde<L>* ptrAnterior = ptrAtual->anterior;
            Noldde<L>* ptrProximo = ptrAtual->proximo;

            if(ptrAnterior){
                ptrAnterior->proximo = ptrProximo;
            }
            else{
                primeiro = ptrProximo;
            }

            if(ptrProximo){
                ptrProximo->anterior = ptrAnterior;
            }
            else{
                ultimo = ptrAnterior;
            }

            delete ptrAtual;
            n--;
            return true;
         }

        Noldde<L>* busca(L valor){
            Noldde<L>* atual = primeiro;
            Noldde<L>* anterior = atual->anterior;

            while(atual != NULL){
                if(atual->conteudo == valor){
                    cout<<"hospede buscado: "<<atual->conteudo<<endl;
                    return atual;
                }
                anterior = atual->anterior;
                atual = atual->proximo;
            }
            return NULL;
        }




};

#endif // LDDE_H
