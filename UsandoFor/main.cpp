#include <iostream>

using namespace std;
int main() {
    int filas;
    int columnas;
    int vector[2][2];

    /*for (contador = 1; contador <=10; contador++) {
        if (contador % 2 == 0){
            cout<<contador<<endl;
        }
    }*/
    for(filas = 0; filas<=2; filas++){
        for (columnas = 0; columnas <=2; columnas++) {
            cout<<"Ingresa el numero: "<<endl;
            cin>>vector[columnas][filas];
        }
    }
    for(filas = 0; filas<=2; filas++){
        for (columnas = 0; columnas <=2; columnas++) {
            cout<<vector[columnas]<<endl;
        }

    }


    return 0;
}

