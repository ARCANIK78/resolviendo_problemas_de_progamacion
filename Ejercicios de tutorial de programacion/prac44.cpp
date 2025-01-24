// Se realiza la carga de 10 valores enteros por teclado. Se desea conocer:
//a) La cantidad de valores ingresados negativos.
//b) La cantidad de valores ingresados positivos.
//c) La cantidad de múltiplos de 15.
//d) El valor acumulado de los números ingresados que son pares. 
#include <iostream>
using namespace std;
int main(){
    int n,f,valor,positivos,negativos,mult15,pares,acumulado;
    n = 10;
    for (f=1;f<=n; f++){
        cin >> valor;
        if (valor > 0){
            positivos = positivos + 1;
        }
        if(valor < 0){
            negativos = negativos + 1;
        }
        if (valor % 15 == 0){
            mult15 = mult15 + 1;
        }
        if (valor % 2 == 0){
            pares = pares + 1;
        }else{
            acumulado = acumulado + 1;
        }
    }
    cout << "-----informe-2024----";
    cout << "\n";
    cout << "Total positivos = ";
    cout << positivos;
    cout << "\n";
    cout << "Total negativos = ";
    cout << negativos;
    cout << "\n";
    cout << "Total multiplos 15 = ";
    cout << mult15;
    cout << "\n";
    cout << "Total pares = ";
    cout << pares;
    cout << "\n";
    cout << "Total acumulado = ";
    cout << acumulado;
}