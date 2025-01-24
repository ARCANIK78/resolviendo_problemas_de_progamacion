// Mostrar los múltiplos de 8 hasta el valor 500. 
//Debe aparecer en pantalla 8 - 16 - 24, etc.
#include <iostream>
using namespace std;
int main(){
    int n,cont;
    n = 500;
    cont = 1;
    while (cont <= n){
        cout << cont;
        cout << " - ";
        cont = cont + 8;
    }

}