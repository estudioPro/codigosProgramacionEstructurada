#include <iostream>

using namespace std;
int main() {
    int arreglo1[3];
    int arreglo2[3];
    int arregloSuma[3];

    for (int i = 0; i < 3; ++i) {
        cout<<"Ingresa el dato["<<i+1<<"] del arreglo 1:"<<endl;
        cin>>arreglo1[i];
    }
    cout<<"\n"<<endl;
    for (int i = 0; i < 3; ++i) {
        cout << "Ingresa el dato[" << i + 1 << "] del arreglo 2:" << endl;
        cin >> arreglo2[i];
    }

    cout<<"\n"<<endl;
    cout<<"Arreglo 1"<<endl;
    for (int i = 0; i < 3; ++i) {
       cout<<arreglo1[i]<<" ";
    }
    cout<<"\nArreglo 2"<<endl;
    for (int i = 0; i < 3; ++i) {
        cout<<arreglo2[i]<<" ";
    }

    cout<<"\nLa suma de los dos da: "<<endl;
    for (int j = 0; j < 3; ++j) {
        arregloSuma[j] = arreglo1[j] + arreglo2[j];
        cout<<arregloSuma[j]<<" ";
    }

    return 0;
}