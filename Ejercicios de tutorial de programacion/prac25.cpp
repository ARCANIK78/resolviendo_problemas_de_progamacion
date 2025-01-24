//Desarrollar un programa que permita la carga de 10 valores
//por teclado y nos muestre posteriormente la suma de los valores ingresados y su promedio.
#include <iostream>
using namespace std;
int main(){
    int x,n,suma,alma,promedio;
    cout << "Ingrese cuantas notas = ";
    cin >> x;
    n = 1;
    suma = 0;
    alma = 0;
    while (n <= x){
        cout << "Ingrese la calificacion ";
        cout << n;
        cout << " = ";
        cin >> suma;
        alma = alma + suma;
        n = n + 1;
    }
    promedio = alma / x;
    cout << promedio;

}