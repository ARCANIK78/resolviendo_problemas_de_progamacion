//Realizar un programa que pida la carga de dos vectores numéricos enteros de 4 elementos. 
// Obtener la suma de los dos vectores, dicho resultado guardarlo en un tercer vector del 
// mismo tamaño. Sumar componente a componente. 
#include <iostream>
using namespace std;
class Componente{
    private:
    int vector1[4];
    int vector2[4];
    int vector3[4];
    public:
    void entrada();
    void suma();
};
void Componente::entrada(){
    cout << "Vector 1";
    cout << "\n";
    for (int x =0; x <4; x++){
        cout << "Ingrese el valor ";
        cin >> vector1[x];
    }
    cout << "Vector 2";
    cout <<"\n";
    for (int y =0 y < 4; y++){
        cout << "Ingrese el valor ";
        cin >> vector2[y];
    }
}
void Componente::suma(){
    cout << "Suma de los 2 vectores ";
    for (int z = 0 z<4; z++){
        vector3[z] = vector1[z]+vector2[z];
        cout << "\n";
        cout << vector3[z];
    }
}
int main(){
    Componente ver;
    ver.entrada();
    ver.suma();
}



