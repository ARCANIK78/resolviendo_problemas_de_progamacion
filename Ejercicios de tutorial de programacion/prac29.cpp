// En una empresa trabajan n empleados cuyos sueldos oscilan entre $100 y $500,
//realizar un programa que lea los sueldos que cobra cada empleado e informe 
//cuántos empleados cobran entre $100 y $300 y cuántos cobran más de $300. 
//Además el programa deberá informar el importe que gasta la empresa en sueldos al personal.
#include <iostream>
using namespace std;
int main(){
    int n,cont, sueldos, cobranRegular, cobranMas;
    cin >> n;
    cont = 1;
    while (cont <= n){
        cin >> sueldos;
        if (sueldos >= 100 && sueldos <= 300){
            cobranRegular = cobranRegular + 1;
        }else{
            cobranMas = cobranMas + 1;
        }
        cont = cont + 1;
        gasto = sueldos;
    }
    cout << "Los que cobran entre de 100 y 300 son = ";
    cout << cobranRegular;
    cout << "\n";
    cout << "Los que cobran mas de 300 = ";
    cout << cobranMas;
    cout << "\n";
    cout << sueldos;
}