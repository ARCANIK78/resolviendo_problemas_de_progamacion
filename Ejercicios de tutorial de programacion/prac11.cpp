#include <iostream>
using namespace std;

int main(){
    float nota1,nota2,nota3, promedio;
    cin >> nota1;
    cin >> nota2;
    cin >> nota3;
    promedio = (nota1 + nota2 + nota3) / 3;
    if (promedio >= 7){
        cout << "Promocionado con ";
        cout << promedio;
    }else{
        cout << "Vuelva a repetir perro";
        cout << promedio;
    }
    return 0;
}