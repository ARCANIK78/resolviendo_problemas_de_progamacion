//Desarrollar un programa que permita cargar n números enteros y luego nos informe 
//cuántos valores fueron pares y cuántos impares. Emplear el operador “%” en 
//la condición de la estructura condicional (este operador retorna el resto de 
//la división de dos valores, por ejemplo 11%2 retorna un 1):
//	if (valor%2==0)         //Si el if da verdadero luego es par.
#include <iostream>
using namespace std;

int main(){
    int n,cont, pares, impares;
    cin >> n;
    cont = 1;
    pares = 0;
    impares = 0;
    while (cont <= n){
        cout << cont;
        if (cont % 2 == 0){
            pares = pares + 1;
            cout << " pares\n";
        }else{
            impares = impares + 1;
            cout << " Impares\n";
        }
        cont = cont +1 ;
    }
    cout << "\n";
    cout << "Total pares = ";
    cout << pares;
    cout << "\n";
    cout << "Total impares = ";
    cout << impares;
    cout << "\n";
}