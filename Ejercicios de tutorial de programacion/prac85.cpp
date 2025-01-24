// Crear una matriz de 2 filas y 5 columnas. 
// Realizar la carga de componentes por columna (es decir primero ingresar toda la primer columna, luego la segunda columna y así sucesivamente)
// Imprimir luego la matriz.
/*
9 9 9 9 9
8 8 8 8 8
*/
#include <iostream>
using namespace std;
class Matriz4{
    private:
    int v1[100][100];  // [fila][columna]
    public:
    void entrada();
    void salid();
};
void Matriz4::entrada(){
    for(int x=0;x<5;x++){
        for(int y=0;y<2;y++){
            cin >> v1[y][x];
        }
    }
}
void Matriz4::salid(){
    for(int a=0;a<2;a++){  
        for (int b=0;b<5;b++){
            cout << v1[a][b] << " ";
        }
        cout << "\n";
    }
}
int main(){
    Matriz4 ej;
    ej.entrada();
    cout << "\n";
    ej.salid();
}