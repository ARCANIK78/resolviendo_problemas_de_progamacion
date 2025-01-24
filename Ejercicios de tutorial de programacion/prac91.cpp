/*
 Confeccionar una clase que represente un empleado.
  Definir como atributos su nombre y su sueldo. 
  En el constructor cargar los atributos y luego en otro método 
  imprimir sus datos y por último uno que imprima un mensaje si debe pagar impuestos (si el sueldo supera a 3000) 
*/
#include <iostream>
using namespace std;
class Empleado{
    private:
    char nombre[40];
    int sueldo;
    public:
    Empleado();
    void imprimir();
    void debe();
};
Empleado::Empleado(){
    cin >> nombre;
    cin >> sueldo;
}
void Empleado::imprimir(){
    cout << "Nombre = " << nombre << "\n";
    cout << "Sueldo = " << sueldo << "\n";
}
void Empleado::debe(){
    if(sueldo > 3000){
        cout << "Debe pagar Impuestos" << "\n";
    }
}
int main(){
    Empleado p1;
    p1.imprimir();
    p1.debe();
}
