//De un operario se conoce su sueldo y los años de antigüedad. 
//Se pide confeccionar un programa que lea los datos de entrada e informe:

//a) Si el sueldo es inferior a 500 y su antigüedad es igual o superior a 10 años, 
//otorgarle un aumento del 20 %, mostrar el sueldo a pagar.

//b)Si el sueldo es inferior a 500 pero su antigüedad es menor a 10 años, 
//otorgarle un aumento de 5 %.

//c) Si el sueldo es mayor o igual a 500 mostrar el sueldo en pantalla sin cambios. 
#include <iostream>
using namespace std;
int main(){
    float sueldo, promocio, resultado;
    int año;
    cin >> sueldo;
    cin >> año;
    if (sueldo > 500){
        cout << "Si cambios";
        cout << sueldo;
    }else{
        if (año > 10){
            promocio = sueldo*0.20;
            resultado = promocio + sueldo;
            cout << "Con cambios del 20%\n";
            cout << resultado;
            
        }else{
            promocio = sueldo*0.5;
            resultado = promocio + sueldo;
            cout << "Con cambios del 5%\n";
            cout << resultado;
        }
    }

}