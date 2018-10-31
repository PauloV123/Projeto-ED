#ifndef FILACIRCULAR_H
#define FILACIRCULAR_H
#define MAX 50
#include<iostream>
using namespace std;
template <typename F>
class FilaCirc{
    private:
        F v[MAX+1];
        int i;
        int f;
        int n;
    public:
        FilaCirc(): i(0), f(0), n(MAX+1){

        }

        bool enfileira(F valor){
            if( ((f+1) % n) == 1 ){
                return false;
            }
            v[f] = valor;
            f = (f+1) % n;
            return true;
        }

        void mostraFilaCirc(){
            for(int h = i; h % n != f; h = (h+1) % n){
               cout << v[h] <<" ";
            }
        }

        int desenfileira(F valor){

             if(i==f){
                if(valor){
                  for(int i=0;i<n;i++){
                    if(v[i] == valor){
                      return v[0];
                    }
                  }

                }
               }
             F temp = v[i];

             i = (i+1) % n;


             return temp;
      }

};


#endif // FILACIRCULAR_H
