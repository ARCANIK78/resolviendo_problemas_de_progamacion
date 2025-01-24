//strcmp 
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char nombre1[40], nombre2[40];
    cout << "Ingrese su nombre ";
    cin.getline(nombre1,40);
    cout << "Ingrese su nombre ";
    cin.getline(nombre2,40);
    if (strcmp(nombre1, nombre2)== 0){
        cout << "Son iguales";
    }else{
        if(strcmp(nombre1, nombre2)>0){
            cout << "nombre1 es mayor";
            cout << "\n";
        }else{
            cout << "nombre2 es mayor";
            cout << "\n";
        }
    }
}