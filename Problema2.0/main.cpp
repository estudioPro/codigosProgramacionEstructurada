#include <iostream>

using namespace std;
int main() {
    int cantidadAlumnos;
    float pagoPorAlumno;
    float pagoTotal;

    cout<<"Ingresa la cantidad de alumnos que van a hacer el viaje: ";
    cin>>cantidadAlumnos;

    if (cantidadAlumnos == 0 | cantidadAlumnos < 0){
        cout<<"Error, debe de haber por lo menos un alumno"<<endl;

    }else if(cantidadAlumnos >= 100){
        pagoPorAlumno = 65.00;
        pagoTotal = cantidadAlumnos * pagoPorAlumno;
        cout<<"Se va a pagar por alumno: "<<pagoPorAlumno<<endl;
        cout<<"El pago por el autobus sera de: "<<pagoTotal<<endl;

    } else if(cantidadAlumnos >= 50){
        pagoPorAlumno = 70.00;
        pagoTotal = cantidadAlumnos * pagoPorAlumno;
        cout<<"Se va a pagar por alumno: "<<pagoPorAlumno<<endl;
        cout<<"El pago por el autobus sera de: "<<pagoTotal<<endl;

    } else if(cantidadAlumnos >= 30){
        pagoPorAlumno = 95.00;
        pagoTotal = cantidadAlumnos * pagoPorAlumno;
        cout<<"Se va a pagar por alumno: "<<pagoPorAlumno<<endl;
        cout<<"El pago por el autobus sera de: "<<pagoTotal<<endl;

    }
     else if (cantidadAlumnos < 30){
        pagoPorAlumno = 4000 / cantidadAlumnos;
        pagoTotal = 4000;
        cout<<"Se va a pagar por alumno: "<<pagoPorAlumno<<endl;
        cout<<"El pago por el autobus sera de: "<<pagoTotal<<endl;
    }


    return 0;
}