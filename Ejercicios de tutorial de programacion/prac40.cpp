//Desarrollar un programa que muestre la tabla de multiplicar del 5 (del 5 al 50) 
#include <iostream>
using namespace std;
int main(){
    int n,f,numero,multi;
    n = 50;
    numero = 5;
    for (f=1; f <= n; f++){
        cout << numero;
        cout << " x ";
        cout << f;
        cout << " = ";
        cout << numero * f;
        cout << "\n"; 
    }
}