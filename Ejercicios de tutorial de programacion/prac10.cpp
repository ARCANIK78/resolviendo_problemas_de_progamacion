#include <iostream>
using namespace std;
//1.-Realizar un programa que solicite la carga por teclado de dos números,
//2.-si el primero es mayor al segundo informar su suma y diferencia,
//3.-en caso contrario informar el producto y la división del primero respecto al segundo.
int main(){
    int num1, num2, suma, diferencia, producto, division;
    cin >> num1;
    cin >> num2;
    if (num1 > num2){
        suma = num1 + num2;
        diferencia = num1 - num2;
        cout << "\n";
        cout << suma;
        cout << "\n";
        cout << diferencia;
        cout << "\n";
    }else{
        producto = num1 * num2;
        division = num1 / num2;
        cout << "\n";
        cout << producto;
        cout << "\n";
        cout << division;
        cout << "\n";
    }
}