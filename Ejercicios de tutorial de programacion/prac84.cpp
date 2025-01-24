// Crear y cargar una matriz de 3 filas por 4 columnas. 
// Imprimir la primer fila. Imprimir la última fila e imprimir 
//  la primer columna.
#include <iostream>
using namespace std;
class Matriz33{
    private:
    int v1[100][100];
    public:
    void entrada();
    void primerafila();
    void ultimafila();
    void primeracolumna();
};
void Matriz33::entrada(){
    for (int x=0; x <3;x++){
        for(int y=0;y<4;y++){
            cin >> v1[x][y];
        }
    }
}
void Matriz33::primerafila(){
    cout << "------Primera Fila------"<<"\n";
    for(int xx=0;xx <4;xx++){
        cout << v1[0][xx];
        cout <<" ";
    }
    cout << "\n";
}
void Matriz33::ultimafila(){
    cout << "------Ultima Fila------" <<"\n";
    for(int yy=0;yy<4;yy++){
        cout << v1[2][yy] << " ";
    }
    cout << "\n";
}
void Matriz33::primeracolumna(){
    cout << "------Primera Columna------"<<"\n";
    for(int j=0;j<3;j++){
        cout << v1[j][0] << " ";
    }
}

int main(){ 
    Matriz33 p1;
    p1.entrada();
    p1.primerafila();
    p1.ultimafila();
    p1.primeracolumna();
}
/*
9 9 9 9 
8 8 8 8
7 7 7 7
*/