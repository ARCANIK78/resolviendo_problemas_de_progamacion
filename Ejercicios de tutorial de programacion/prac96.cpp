/* Desarrollar un programa que defina un vector de 5 enteros y muestre el mayor y menor elemento. 
En el constructor cargarlo con valores aleatorios entre 0 y 10.
La clase debe utilizar solo la palabra clave public en la declaración de la clase. 
*/
#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class Progama{
    private:
    int a = 100;
    int v1[100];
    public:
    Progama();
    void mayor();
    void menor();
};
/*srand (time(NULL));
    valor = rand() % 6 + 1;
}*/
Progama::Progama(){
    srand(time(NULL));
    for(int x=0;x<a;x++){
        v1[x] = rand() % 10000 + 1;
    }
    for(int xx=0;xx<a;xx++){
        cout << v1[xx] << "\n";
    }
    cout << "Termino" << "\n";
}
void Progama::mayor(){
    int mayor;
    mayor=v1[0];
    int pos;
    for(int y=0;y<a;y++){
        if(v1[y] > mayor){
            mayor=v1[y];
            pos=y;
        }
    }
    cout << "El Mayor es = " << mayor << "\n";
}
void Progama::menor(){
    int menor;
    menor=v1[0];
    int pos1;
    for(int j=0;j<a;j++){
        if(v1[j] < menor){
            menor=v1[j];
            pos1=j;
        }
    }
    cout << "El Menor es = " << menor << "\n";
}
int main(){
    Progama p1;
    p1.mayor();
    p1.menor();
}