//Realizar un programa que imprima 25 términos de la serie 11 - 22 - 33 - 44, etc. (No se ingresan valores por teclado)
#include <iostream>
using namespace std;

int main(){
    int n,m,uno,diez,f1,f2;
    cin >> n;
    uno = 1;
    diez = 10;
    while (m <= n){
        cout << m * 11;
        cout << " - ";
        m = m + 1;
    }
}