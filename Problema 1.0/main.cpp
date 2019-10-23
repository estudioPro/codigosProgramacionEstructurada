#include <iostream>

using namespace std;
int main() {
float Lapices;
float Precio;
cout<<"Ingrese cantidad de lapices"<<endl;
cin>>Lapices;
if (Lapices>=1000){
    Precio=Lapices*0.85;
}
else{
    Precio=Lapices*0.90;
}
cout<<"El precio es:"<< Precio <<endl;
}