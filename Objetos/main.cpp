#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <string>

using namespace std;

class Persona {

private://Atributos
    int edad;
    string nombre;

public://Metodos
    Persona(int, string);//Constructor
    void leer();
    void comer();
};

//Constructo, nos sirve para inicializar los atributos de la clase
Persona::Persona(int _edad, string _nombre) {
    edad = _edad;
    nombre = _nombre;
}

void Persona::leer() {//Metodos de la clase persona
    cout<<"Soy "<<nombre<<" estoy leyendo"<<" y tengo "<<edad<<endl;
}

void Persona::comer() {
    cout<<"Soy "<<nombre<<" y estoy comiendo, tengo: "<<edad<<" anios"<<endl;
}

int main() {
    int edad;
    string nombre;

    Persona persona1 = Persona(20, "Vandersal");//Creamos un objeto
    Persona persona2(18, "Kevin");

    cout<<"Ingresa tu edad: ";
    cin>>edad;
    cout<<"\nIngresa tu nombre: ";
    cin>>nombre;
    cout<<""<<endl;
    Persona persona3(edad, nombre);

    persona1.leer();//Lo mandamos a llamar
    persona2.comer();
    persona3.leer();

        return 0;
}