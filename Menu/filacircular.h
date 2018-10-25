#ifndef FILACIRCULAR_H
#define FILACIRCULAR_H
#define MAX 50

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
                std::cout << v[h] <<" ";
            }
        }

        bool desenfileira(F *desenfileirado = NULL){
            if(i==f){
                return false;
            }

            if(desenfileirado){
                *desenfileirado=v[i];
            }
            i = (i+1) % n;
            return true;
        }

};


#endif // FILACIRCULAR_H
