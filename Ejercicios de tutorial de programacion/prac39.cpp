//Desarrollar un programa que solicite la carga de 10 números e imprima
// la suma de los últimos 5 valores ingresados.
#include <iostream>
using namespace std;
int main(){
    int n,f, valor, suma;
    cin >> n;
    for (f=1; f <= n; f++){
        if (f >= 6){
            cout << f;
            cout << " = ";
            cin >> valor;
            suma = suma + valor;

        }
    }
    cout << "total de la suma = ";
    cout << suma;
    cout << "\n";
}