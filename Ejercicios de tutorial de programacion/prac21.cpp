//Escribir un programa que pida ingresar la coordenada de un punto en el plano, 
//es decir dos valores enteros x e y (distintos a cero).
//Posteriormente imprimir en pantalla en que cuadrante se ubica dicho punto. 
//(1º Cuadrante si x > 0 Y y > 0 , 2º Cuadrante: x < 0 Y y > 0, etc.) 
#include <iostream>
using namespace std;

int main(){
    int x, y ;
    cin >> x;
    cin >> y;
    if (x > 0 && y > 0){
        cout << "1º Cuadrante";
    }else if (x > 0 && y < 0){
        cout << "3º Cuadrante";
    }else if (x < 0 && y > 0){
        cout << "4º Cuadrante";
    }
    else{
        cout << "2º Cuadrante";
    }
}