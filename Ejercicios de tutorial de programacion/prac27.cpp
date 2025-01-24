//Escribir un programa que solicite ingresar 10 notas de alumnos y nos informe cuántos
//tienen notas mayores o iguales a 7 y cuántos menores.
#include <iostream>
using namespace std;
int main(){
    int x, n,nota,mayores, menores;
    n = 1;
    cin >> x;
    while (n <= x){
        cin >> nota;
        if (nota >= 70){
            mayores = mayores +1;
        }else{
            menores = menores + 1;
        }
        n = n +1;
    }
    cout << "Notas mayores = ";
    cout << mayores;
    cout << " Notas menonres = ";
    cout << menores;

}