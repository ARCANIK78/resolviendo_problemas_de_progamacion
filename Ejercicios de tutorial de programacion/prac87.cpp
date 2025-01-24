/*
Boliva 23 23 23
Rusiaa 55 55 55
Peruuu 99 99 99

Se desea saber la temperatura media trimestral de cuatro paises. Para ello se tiene como dato las temperaturas medias mensuales 
de dichos paises.
Se debe ingresar el nombre del país y seguidamente las tres temperaturas medias mensuales.
Seleccionar las estructuras de datos adecuadas para el almacenamiento de los datos en memoria.
a - Cargar por teclado los nombres de los paises y las temperaturas medias mensuales. x
b - Imprimir los nombres de las paises y las temperaturas medias mensuales de las mismas.
c - Calcular la temperatura media trimestral de cada país.
c - Imprimr los nombres de las provincias y las temperaturas medias trimestrales.
b - Imprimir el nombre de la provincia con la temperatura media trimestral mayor. 
*/
#include <iostream>
using namespace std;
class Clima{
    private: 
    char pais[100][100];
    int temperatura[100][100];
    int tempMedia[100];
    public:
    void entrada();
    void media();
    void mayor();
    void salida();
};
void Clima::entrada(){
    cout << "Ingrese el nombre del pais y 3 temperaturas"<<"\n"; 
    for(int x=0;x<4;x++){
        cin >> pais[x];
        for( int y=0;y<3;y++){
            cin >>temperatura[x][y];
        }
    }
}
void Clima::media(){
    int suma=0;
    for(int j=0;j<4;j++){
        for(int jj=0;jj<3;jj++){
            suma = suma + temperatura[j][jj];
            tempMedia[j] = suma/3;
        }
        suma=0;
    }
}
void Clima::mayor(){
    int pr = tempMedia[0];
    int pos=0;
    for(int f=0;f<4;f++){
        if(tempMedia[f]>pr){
            pr=tempMedia[f];
            pos=f;
        }
    }
    cout << "Pais "<< pais[pos]<<" Tiene la temperatura mayor = " << tempMedia[pos]<<"\n";
}
void Clima::salida(){
    cout << "-----Lista Media Temperatura---------" <<"\n";
    for(int xx =0;xx<4;xx++){
        cout << pais[xx] << " ";
        for(int yy=0;yy<3;yy++){
            cout << temperatura[xx][yy] << " ";
        }
        cout << tempMedia[xx];
        cout << "\n";
    }
}
int main(){
    Clima p1;
    p1.entrada();
    p1.media();
    p1.salida();
    p1.mayor();
    
}