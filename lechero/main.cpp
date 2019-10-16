#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    float litrosProduccion;
    float precioGalon;
    float cantidadGalonProduccion;
    float ganancia;
    cout<<"Ingresa la cantidad de litros en produccion: ";
    cin>>litrosProduccion;
    cout<<"Ingresa el precio del galon: ";
    cin>>precioGalon;
    cantidadGalonProduccion = (litrosProduccion / 3.785);
    ganancia = precioGalon*cantidadGalonProduccion;

    cout<<"Hola mundo"<<endl;
    cout<<"Tu ganancia total es: "<<ganancia<<endl;

    return 0;
}
