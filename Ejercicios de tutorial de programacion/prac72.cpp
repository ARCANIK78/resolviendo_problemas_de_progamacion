//Desarrollar un programa que permita cargar 5 nombres de personas y sus edades respectivas. 
//Luego de realizar la carga por teclado de todos los datos imprimir los nombres de las personas mayores de edad (
//mayores o iguales a 18 años)
#include <iostream>
using namespace std;
class PersonasVector{
    private:
    string personas[100];
    int edad[100];
    public:
    void entrada();
    void mayores();
    void menores();
    void salida();

};
void PersonasVector::entrada(){
    for (int x=0;x <5;x++){
        cout << "Ingrese el nombre de la persona ";
        cout << x;
        cout << " = ";
        cin >> personas[x];
        cout << "Ingrese la edad de la persona ";
        cout << x;
        cout << " = ";
        cin >> edad[x];
    }
}
void PersonasVector::mayores(){
    cout << "--------Mayores de edad---------";
    cout << "\n";
    for (int y = 0;y <5;y++){
        if (edad[y] >= 18){
            cout << personas[y];
            cout << "\n";
        }
    }
}
void PersonasVector::menores(){
    cout << "--------menores de edad---------";
    cout << "\n";
    for (int z = 0;z <5;z++){
        if (edad[z] < 18){
            cout << personas[z];
            cout << "\n";
        }
    }
}

int main(){
    PersonasVector per1;
    per1.entrada();
    per1.mayores();
    per1.menores();
}