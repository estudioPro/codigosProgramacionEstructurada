#include <iostream>

using namespace std;

int suma(int numero1, int numero2);
int main() {
    int numero1;
    int numero2;

    cout<<"Ingresa el numero 1: ";
    cin>>numero1;
    cout<<"\nIngresa el numero 2: ";
    cin>>numero2;

    cout<<"Tu resultado es: "<<suma(numero1, numero2)<<endl;
    return 0;
}

int suma(int numero1, int numero2){
    int resultado;
    resultado = numero1 + numero2;
}