#include <iostream>

using namespace std;
int main() {
    int contador = 1;
    int cantidadAlumnos;
    int edadAlumno;
    int sumaEdades = 0;
    float edadPromedio;

    cout<<"Ingresa la cantidad de alumnos: ";
    cin>>cantidadAlumnos;

    while (contador <= cantidadAlumnos){
        cout<<"Ingresa la edad del alumno "<<contador<<" :";
        cin>>edadAlumno;
        sumaEdades = sumaEdades + edadAlumno;
        contador++;
    }
    edadPromedio = sumaEdades / cantidadAlumnos;
    cout<<"La edad promedio del grupo es: "<<edadPromedio;
    return 0;
}