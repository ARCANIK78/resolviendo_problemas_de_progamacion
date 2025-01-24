//  Realizar un programa que acumule (sume) valores ingresados por teclado 
//  hasta ingresar el 9999 (no sumar dicho valor, indica que ha finalizado la carga). 
//  Imprimir el valor acumulado e informar si dicho valor es cero, mayor a cero o menor a cero.
#include <iostream>
using namespace std;
int main(){
    int valor, cont,suma;
    cont = 0;
    do{
        cin >> valor;
        cont ++;
        if (valor != 9999){
            suma = suma + valor;
        }
    }while(valor != 9999);
    cout << "Finalizo la Carga";
    cout << "\n";
    if(cont > 1){
        cout << "Es mayor a 0 ";
        cout << suma;
    }else{
        cout << "Es menor a 0 ";
        cout << suma;
    }
}   
