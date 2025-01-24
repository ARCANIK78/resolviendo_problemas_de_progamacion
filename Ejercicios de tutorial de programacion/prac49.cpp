//Realizar un programa que permita ingresar el peso (en kilogramos) de piezas.
// El proceso termina cuando ingresamos el valor 0. Se debe informar:
//a) Cuántas piezas tienen un peso entre 9.8 Kg. y 10.2 Kg.?, 
//    cuántas con más de 10.2 Kg.? y cuántas con menos de 9.8 Kg.?
//b) La cantidad total de piezas procesadas. 
#include <iostream>
using namespace std;
int main(){
    float peso,conMas,conMenos,total, conRango;
    int valor;
    valor = 0;
    do{
        cin >>peso;
        valor++;
        total = total + peso;
        if (peso >= 9.8 && peso <= 10.2){
            conRango = conRango + valor;
        }
        if(peso >= 9.8){
            conMas = conMas + valor;
        }
        if(peso <= 10.2){
            conMenos = conMenos + valor;
        }
    }while(peso != 0);
    cout <<"\n";
    cout <<"El peso entre 9.8kg y 10.2kg son = ";
    cout << conRango;
    cout <<"\n";
    cout << "con 9.8kg = ";
    cout << conMas;
    cout << "\n";
    cout << "Con 10.2 = ";
    cout << conMenos;
    cout << "\n";
    cout <<"Total de piezas procesadas son ";
    cout << total;
}