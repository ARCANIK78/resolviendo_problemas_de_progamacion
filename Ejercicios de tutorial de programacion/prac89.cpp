/*
Plantear una clase llamada Alumno y definir como atributos su nombre y su edad. 
En el constructor realizar la carga de datos. Definir otros dos métodos para imprimir
 los datos ingresados y un mensaje si es mayor o no de edad (edad >=18)
*/
#include "iostream"
using namespace std;
class Alumno{
    private:
    char nombre[40];
    int edad;
    public:
    Alumno();
    void imprimir();
    void esMayor();
};
Alumno::Alumno(){
    cout <<"Ingrese su nombre y edad = ";
    cin >> nombre;
    cin >> edad;
}
void Alumno::imprimir(){
    cout << "Nombre = " << nombre <<"\n"<<"Edad = " << edad << "\n";
}
void Alumno::esMayor(){
    if(edad > 18){
        cout << "Eres mayor de edad "<< "\n";
    }else{
        cout << "Eres menor de edad "<< "\n";
    }
}
int main(){
    Alumno p1;
    p1.imprimir();
    p1.esMayor();
}