#include <iostream>
using namespace std;
class Operacion{
    protected:
    int valor1;
    int valor2;
    int resultado;
    public:
    void cargar1();
    void cargar2();
    void mostrarResultado();
};
class Suma: public Operacion{
    public:
    void operar();
};
class Resta: public Operacion{
    public:
    void operar();
};
void Operacion::cargar1(){
    cout << "Ingrese primer valor: ";
    cin >> valor1;
}
void Operacion::cargar2(){
    cout << "Ingrese segundo valor: ";
    cin >> valor2;
}
void Operacion::mostrarResultado(){
    cout << "Resultado: " << resultado << "\n"; 
}
void Suma::operar(){
    resultado = valor1 + valor2;
}
void Resta::operar(){
    resultado = valor1 - valor2;
}
int main(){
    Suma p1;
    p1.cargar1();
    p1.cargar2();
    p1.operar();
    p1.mostrarResultado();

    Resta p2;
    p2.cargar1();
    p2.cargar2();
    p2.operar();
    p2.mostrarResultado();
}