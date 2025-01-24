//Crear y cargar una matriz de 4 filas por 4 columnas. Imprimir la diagonal principal.
//
//             x    -    -    -
//              -    x    -    -
//              -    -    x    -
//              -    -    -    x
//              
#include <iostream>
using namespace std;
class matriz1{
    private:
    int v1[100][100];
    public:
    void cargar();
    void mostrarDiagonal();
};
void matriz1::cargar(){
    for(int x=0;x<4;x++){
        for(int y=0;y<4;y++){
            cin >> v1[x][y];
        }
    }   
}

void matriz1::mostrarDiagonal(){
    for(int j=0;j<4;j++){
        cout << v1[j][j];
    }
}
int main(){
    matriz1 ej;
    ej.cargar();
    ej.mostrarDiagonal();
}