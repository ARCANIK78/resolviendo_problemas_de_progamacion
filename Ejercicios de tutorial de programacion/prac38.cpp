//Confeccionar un programa que lea n pares de datos, 
// cada par de datos corresponde a la medida de la base y la altura de un triángulo. 
// El programa deberá informar:
// a) De cada triángulo la medida de su base, su altura y su superficie.
// b) La cantidad de triángulos cuya superficie es mayor a 12. 
#include <iostream>
using namespace std;
int main(){
    int f,n, base, altura,area,triangulo;
    cin >> n ;
    for (f=1; f <= n; f++){
        cin >> base;
        cin >> altura;
        area = base * altura / 2;
        cout << "su base es ";
        cout << base;
        cout << " su altura es ";
        cout << altura;
        cout <<" Su area es = ";
        cout << area;
        cout << "\n";
        if (area > 12){
            triangulo = triangulo + 1;
        }
    }
    cout << "total mayores a 12 son = ";
    cout << triangulo;
}