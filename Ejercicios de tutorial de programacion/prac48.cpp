//Escribir un programa que solicite la carga de números por teclado,
// obtener su promedio. Finalizar la carga de valores cuando se cargue el valor 0.
//Cuando la finalización depende de algún valor ingresado por el operador conviene 
// el empleo de la estructura do while, por lo menos se cargará un valor 
// (en el caso más extremo se carga 0, que indica la finalización de la carga de valores)
#include <iostream>
using namespace std;
int main(){
    int n,f,valor,suma,promedio,cantidad;
    cantidad = 0;
    do{
        cin >> valor;
        cantidad++;
        suma  = suma + valor;
        if (valor == 0){
            cout << "termino la sentencia";
            cout <<"\n";

        }
    }while(valor != 0);

    if (cantidad > 1){
        promedio = suma / cantidad;
        cout << "Promedio = ";
        cout << promedio;
        cout <<"\n";
    }else {
        cout << "No se ingresaron valores";
        cout << "\n";
    }
}