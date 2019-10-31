#include <iostream>

using namespace std;
int main() {
    int multiplo;
    int contador = 1;

    for (int i = 0; i <=200 ; ++i) {
        if (i % 2 == 0){
            multiplo = i*i;
            cout<<multiplo<<endl;
        }
    }

    while(contador <= 200){

        if(contador % 2 == 0){
            multiplo = contador*contador;
            cout<<multiplo<<endl;
        }
        contador = contador + 1;
    }
    return 0;
}