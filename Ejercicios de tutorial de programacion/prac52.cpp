#include <iostream>
using namespace std;
int main(){
    char nombre[40];
    cout << "Ingrese su nombre ";
    cin.getline(nombre,40);
    cout << "Bienvenido ";
    cout << nombre;
}