/*
Implementar la clase Operaciones. 
Al constructor llegan dos enteros que deben utilizarse en los métodos para
 calcular su suma, resta, multiplicación y división. imprimir dichos resultados. 
*/
#include <iostream>
using namespace std;
class Operaciones{
    private:
    int a;
    int b;
    public:
    Operaciones(int aa, int bb);
    void imprimir();
};
Operaciones::Operaciones(int aa, int bb){
    a=aa;
    b=bb;
}
void Operaciones::imprimir(){
    cout << "suma = " << a + b<< "\n";
    cout << "resta = " << a - b << "\n";
    cout << "multi = " << a * b << "\n";
    cout << "division = " << a / b << "\n";
}
int main(){
    Operaciones p1(100,50);
    p1.imprimir();
}