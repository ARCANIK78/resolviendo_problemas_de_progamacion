#include <iostream>
using namespace std;

int main(){
    int num1,num2,num3,num4, suma, promedio;
    cin >>num1;
    cin >> num2;
    cin >> num3;
    cin >>num4;
    suma = num1 + num2 + num3+ num4;
    promedio = suma / 4;
    cout << "La suma es ";
    cout << suma;
    cout << "\n";
    cout << "Le promedio es ";
    cout << promedio ;
    return 0;
}