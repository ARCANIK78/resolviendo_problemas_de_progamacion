//Realizar un programa que permita cargar dos listas de 15 valores cada una. 
//Informar con un mensaje cual de las dos listas tiene un valor acumulado mayor 
//(mensajes "Lista 1 mayor", "Lista 2 mayor", "Listas iguales")
//Tener en cuenta que puede haber dos o más estructuras repetitivas en un algoritmo.
#include <iostream>
using namespace std;
int main(){
    int list1, list2, almal1, almal2, n, cont, mayor, menor;
    cont = 1;
    n = 5;
    almal1 = 0;
    almal2 = 0;
    while(cont <= n){
        cout << "valores de la lista1 = ";
        cin >> list1;
        almal1 = almal1 + list1;
        cont = cont +1;
    }
    cont = 1;
    while(cont <= n){
        cout << "valores de la lista2 = ";
        cin >> list2;
        almal2 = almal2 + list2;
        cont = cont +1;
    }
    if (almal1 > almal2){
        cout << "Lista 1 es mayor ";
        cout << almal1;
    }else if (almal1 == almal2){
        cout << "Ambos son iguales";
    }else{
        cout << "Lista 2 es mayor";
        cout << almal2;
    }
}