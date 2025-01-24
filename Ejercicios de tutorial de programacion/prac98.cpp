/*
    Implementar una clase que permita cargar un vector de 5 elementos. Definir tres métodos sobrecargados que :

    void imprimir(); //imprime todo el vector
    void imprimir(int hasta);//imprime desde el principio del vector hasta el valor que le pasamos
    void imprimir(int desde,int hasta);//imprime un rango de valores del vector.
    */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class Vector{
    private:
    int v1[100];
    public:
    void imprimir();
    void imprimir(int hasta);
    void imprimir(int desde, int hasta);
};

void Vector::imprimir(){
    cout << "------Vector------" << "\n";
    srand(time(NULL));
    for(int a=0; a < 5;a++){
        v1[a]= rand()% 100 + 1;
    }
    for(int x=0; x<5;x++){
        cout << v1[x] << " ";
    }
    cout << "\n";
}
void Vector::imprimir(int hasta){
    cout << "------Hasta " << hasta << "-------"<<"\n";
    for(int b=0;b<hasta;b++ ){
        cout << v1[b] << " ";
    }
    cout << "\n";
}
void Vector::imprimir(int desde, int hasta){
    cout << "----desde " << desde << " hasta " << hasta << "-------"<<"\n";
    for(desde;desde < hasta;desde++){
        cout << v1[desde] << " ";
    }
    cout << "\n";
}
int main(){
    Vector p1;
    p1.imprimir();
    p1.imprimir(3);
    p1.imprimir(4,5);
}
