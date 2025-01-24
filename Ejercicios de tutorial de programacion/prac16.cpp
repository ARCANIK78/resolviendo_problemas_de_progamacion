//Confeccionar un programa que permita cargar un número entero positivo
// de hasta tres cifras y muestre un mensaje indicando si tiene 1, 2, o 3 cifras.
// Mostrar un mensaje de error si el número de cifras es mayor. 
#include <iostream>
using namespace std;
int main(){
    int numero ;
    cin >> numero;
    if (numero >= 10){
        if (numero >= 100){
            cout << "3 cifras";
        }else{
        cout << "2 cifras";        
        }
    }else{
        cout << "1 cifras";
    }


}