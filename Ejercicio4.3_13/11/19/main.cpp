#include <iostream>

using namespace std;
int main() {
    int numero;
    int suma = 0;

    for (int i = 0; i < 10; ++i) {
        cout<<"Ingresa el valor "<<i+1<<" : ";
        cin>>numero;
        suma = suma + numero;
    }
    cout<<"Tu resultado es: "<<suma;
    return 0;
}