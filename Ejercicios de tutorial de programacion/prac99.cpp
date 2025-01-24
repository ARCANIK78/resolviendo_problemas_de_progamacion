/*
 Plantear una clase llamada Punto con dos atributos llamados x e y.
Definir dos constructores uno sin parámetros donde cargue en los 
atributos x e y el valor cero y otro con dos parámetros 
que cargue los atributos x e y con los valores que llegan 
al constructor. 
Imprimir los valores de los atributos.
 */
#include <iostream>
using namespace std;
class Punto{
    private:
    int x;
    int y;
    public:
    Punto();
    void neePunto(int xx, int yy);
    void imprimir();
};
Punto::Punto(){
    x=0;
    y=0;
}
void Punto::neePunto(int xx, int yy){
    x=xx;
    y=yy;
}
void Punto::imprimir(){
    cout << "Punto X = " << x << "\n";
    cout << "Punto Y = " << y << "\n";
}
int main(){
    Punto p1;
    p1.imprimir();
    p1.neePunto(10,50);
    p1.imprimir();
}