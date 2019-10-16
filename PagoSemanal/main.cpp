#include <iostream>
using namespace std;

int main() {
    float PorSm;
    float PorHr;
    float SueldoSm;

    cout<<"Ingrese horas trabajadas por semana";
    cin>>PorSm;

    cout<<"Ingrese dinero ganado por hora";
    cin>>PorHr;

    SueldoSm=PorHr*PorSm;

    cout<<"El sueldo semanal es: "<<SueldoSm<<endl;

    return 0;
}