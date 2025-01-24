//Realizar un programa que lea los lados de n triángulos, e informar:
//a) De cada uno de ellos, qué tipo de triángulo es: equilátero (tres lados iguales),
// isósceles (dos lados iguales), o escaleno (ningún lado igual)
//b) Cantidad de triángulos de cada tipo.
//c) Tipo de triángulo que posee menor cantidad. 
#include <iostream>
using namespace std;
int main(){
    int n,f, lado1,lado2,lado3, triangulo;
    cin >> n;
    for (f=1;f<=n;f++){
        cin >> lado1;
        cin >> lado2;
        cin >> lado3;
        if (lado1 == lado2 && lado1 == lado3 && lado2 == lado3 ){
            cout << "equilátero";
        }else if(lado1 == lado2 || lado1 == lado3){
            cout << "isósceles";
        }else{
            cout << "escaleno";
        }
    }
}
