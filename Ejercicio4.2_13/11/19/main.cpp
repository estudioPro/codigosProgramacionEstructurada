#include <iostream>

using namespace std;

int main() {

    int contador = 1;
    int numero;
    int resultado = 0;

    while (contador <= 10){
        cout<<"Ingresa el numero "<<contador<<" :";
        cin>>numero;
        resultado = resultado + numero;

        contador++;
    }

    cout<<"Tu suma es: "<<resultado<<endl;
    return 0;
}