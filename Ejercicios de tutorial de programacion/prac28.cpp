//Se ingresan un conjunto de n alturas de personas por teclado. 
//Mostrar la altura promedio de las personas.
#include <iostream>
using namespace std;
int main(){
    int n,m;
    float altura,personas, promedio;
    cin >> n;
    m = 1;
    while(m <= n){
        cin >> altura;
        personas = personas + altura;
        m = m+1;
    }
    promedio = personas / n;
    cout << "el promedio de las personas son = ";
    cout << promedio;
    cout << "\n";


} 