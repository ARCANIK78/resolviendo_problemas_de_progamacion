#include <iostream>
using namespace std;

class Persona{
private:
    char nombre[40];
    int edad;
    int trabajado;
public:
    void inicializar();
    void imprimir();
    void esMayorEdad();
    void jubilado();
};
void Persona::inicializar(){
    cout <<"Ingrese nombre: ";
    cin.getline(nombre,40);
    cout <<"Ingrese edad: ";
    cin >> edad;
    cout <<"Cuantos años a trabajado: ";
    cin >> trabajado;
}
void Persona::imprimir(){
    cout << "------------Informacion-------------";
    cout <<"\n";
    cout <<"Nombre: ";
    cout <<nombre;
    cout <<"\n";
    cout << "Edad: ";
    cout <<edad;
    cout <<"\n";
    cout <<"Trabajo: ";
    cout << trabajado;
    cout <<" años";
    cout <<"\n";
    
}
void Persona::esMayorEdad(){
    if (edad>=18){
        cout <<"Es mayor de edad";
        cout <<"\n";
    }else{
        cout <<"Es menor de edad";
        cout <<"\n";
    }
}
void Persona::jubilado(){
    if (trabajado > 50){
        cout << "Usted esta jubilado";
        cout <<"\n";

    }else{
        cout << "No esta jubilado";
        cout <<"\n";
    }
}
int main()
{
    Persona persona1;
    Persona persona2;
    //perosn1
    persona1.inicializar();
    persona1.imprimir();
    persona1.esMayorEdad();
    persona1.jubilado();
    //person2
    cin.get();
    persona2.inicializar();
    persona2.imprimir();
    persona2.esMayorEdad();
    persona2.jubilado();
    return 0;
}