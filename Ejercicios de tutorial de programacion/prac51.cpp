//  En un banco se procesan datos de las cuentas corrientes de sus clientes. 
//  De cada cuenta corriente se conoce: número de cuenta y saldo actual. 
//  El ingreso de datos debe finalizar al ingresar un valor negativo en el número de cuenta.
//  Se pide confeccionar un programa que lea los datos de las cuentas corrientes e informe:
//  a)De cada cuenta: número de cuenta y estado de la cuenta según su saldo, sabiendo que:
//  Estado de la cuenta	
//          'Acreedor' si el saldo es >0.
//			'Deudor' si el saldo es <0.
//			'Nulo' si el saldo es =0.

//  b) La suma total de los saldos acreedores. 
#include<iostream>
using namespace std;

int main()
{
    int cuenta,saldo,acreedores,deudor,nulo;
    do{
        cout <<"Ingrese la cuenta = ";
        cin >> cuenta;
        if (cuenta > 0){
            cout <<"Ingrese el saldo = ";
            cin >>saldo;
            if(saldo > 0 ){
                cout << "Acreedor";
                acreedores = acreedores + saldo;
                cout << "\n";
            }else if (saldo <0){
                cout << "Deudor";
                deudor++;
                cout << "\n";
            }else if(saldo == 0){
                cout << "Nulo";
                cout << "\n";
                nulo++;
            }
        }
    }while(cuenta != 0);
    cout << "Termino";
    cout << "\n";
    cout << "-----Informe----";
    cout << "\n";
    cout << "suma total de los saldos acreedores = ";
    cout << acreedores;
    cout << "\n";
    cout << "Cantidad de los deudores = ";
    cout << deudor;
    cout << "\n";
    cout << "Cantidad de los nulos = ";
    cout << nulo;
    cout << "\n";
}
