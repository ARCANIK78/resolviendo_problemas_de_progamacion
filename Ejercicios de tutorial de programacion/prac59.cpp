//Confeccionar una clase que represente un empleado. 
//Definir como atributos su nombre y su sueldo. 
// Confeccionar los métodos para la carga,
//  otro para imprimir sus datos y por último uno que imprima un mensaje si debe pagar impuestos 
//(si el sueldo supera a 3000) 
#include <iostream>
using namespace std;
class Empleados{
    private:
    char nombre[40];
    float sueldo;
    public:
    void entrada();
    void salida();
    void impuestos();
};
void Empleados::entrada(){
    cout << "---Ingrese datos personales---";
    cout << "\n";
    cout << "Nombre = ";
    cin.getline(nombre,40);
    cout << "Sueldo = ";
    cin  >> sueldo;
}
void Empleados::impuestos(){
    if(sueldo > 3000){
        cout << "Debe Pagar Impuestos";
        cout << "\n";
    }else{
        cout << "No Paga Impuestos ";
        cout << "\n";    
    }
}
void Empleados::salida(){
    cout << "----Informe------";
    cout << "\n";
    cout << "Señor = ";
    cout << nombre;
    cout << "\n";
    cout << "Su sueldo es de = ";
    cout << sueldo;
    cout << "\n";
}
int main(){
    Empleados user;
    user.entrada();
    user.salida();
    user.impuestos();
}