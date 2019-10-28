#include <iostream>
#include <string.h>

using namespace std;

int main() {
    string usuario = "Kevin";
    string contra = "1234";
    string usuarioEntrada;
    string contraEntrada;

    cout<<"Ingresa el usuario: ";//Insercción de datos
    cin>>usuarioEntrada;
    cout<<"Ingresa la contra: ";
    cin>>contraEntrada;

    if (usuarioEntrada == usuario & contraEntrada == contra){//Verificador
        cout<<"Bienvenido Kevin"<<endl;
    }else{
        cout<<"Error, usuario invalido"<<endl;
    }

    return 0;
}


