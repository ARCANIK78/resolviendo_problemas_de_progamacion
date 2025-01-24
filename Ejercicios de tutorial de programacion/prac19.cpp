// Se ingresan por teclado tres números, 
//si todos los valores ingresados son menores a 10, 
//imprimir en pantalla la leyenda "Todos los números son menores a diez". 
#include <iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cin >> num1;
    cin >> num2;
    cin >> num3;
    if (num1 <10  && num2 < 10 && num3 < 10 ){
        cout << "\n";
        cout << "Todos los números son menores a diez";
        cout << "\n";
    }else{
        cout << "\n";
        cout << "Nose";
        cout << "\n";
    }
}