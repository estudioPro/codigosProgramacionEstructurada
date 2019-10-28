#include <iostream>
#include <string.h>

using namespace std;

int main() {
    string usuario = "Kevin";
    string contra = "1234";
    string usuarioEntrada;
    string contraEntrada;

    if (usuarioEntrada == usuario & contraEntrada == contra){
        cout<<"Bienvenido Kevin"<<endl;
    }else{
        cout<<"Error, usuario invalido"<<endl;
    }

    return 0;
}


