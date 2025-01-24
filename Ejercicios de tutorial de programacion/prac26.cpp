//Una planta que fabrica perfiles de hierro posee un lote de n piezas.
//Confeccionar un programa que pida ingresar por teclado la cantidad de 
//piezas a procesar y luego ingrese la longitud de cada perfil; 
//sabiendo que la pieza cuya longitud esté comprendida en el rango de 1.20 y 1.30 son aptas. 
//Imprimir por pantalla la cantidad de piezas aptas que hay en el lote. 
#include <iostream>
using namespace std;

int main(){
    int n,m, cantidad, piezas;
    float longitud;

    cout << "Cantidad";
    cin >> cantidad;
    n = 0;
    m = 1;
    while (m <= cantidad ){
        cin >> longitud;
        if (longitud >= 1.20 && longitud <=1.30){
            piezas = piezas + 1;
        }
        m = m + 1;
    }
    cout << "Estan en el rango";
    cout << piezas;   
}