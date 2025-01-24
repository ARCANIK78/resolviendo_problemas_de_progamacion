//Escribir un programa que pida ingresar coordenadas (x,y) que representan puntos en el plano.
//Informar cuántos puntos se han ingresado en el primer, segundo, tercer y cuarto cuadrante.
// Al comenzar el programa se pide que se ingrese la cantidad de puntos a procesar. 
#include <iostream>
using namespace std;
int main(){
    int n,f,x,y;
    cin >> n;
    for (f=1; f <=n; f++){
        cout << "Ingrese X = ";
        cin >> x;
        cout << "Ingrese Y = ";
        cin >> y;
        if (x>0 && y>0){
            cout << "primer cuadrante";
            cout << "\n";
        }else if (x<0 && y>0){
            cout << "segundo cuadrante";
            cout << "\n";
        }else if (x>0 && y<0){
            cout << "cuarto cuadrante";
            cout << "\n";
        }else{
            cout << "tercer cuadrante";
            cout << "\n";
        }
    }
}