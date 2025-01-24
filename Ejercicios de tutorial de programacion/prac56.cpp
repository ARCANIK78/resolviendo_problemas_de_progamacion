#include <iostream>
using namespace std;
class Triangulo{
    private:
    int lado1;
    int lado2;
    int lado3;
    public:
    void inicializar();
    void imprimir();
    void Queladoes();
};
void Triangulo::inicializar(){
    cout << "Ingrese el lado 1 = ";
    cin >> lado1;
    cout << "Ingrese el lado 2 = ";
    cin >> lado2;
    cout << "Ingrese el lado 3 = ";
    cin >> lado3;
}
void Triangulo::imprimir(){
    cout << "-------Triangulo----------";
    cout <<"\n";
    cout << "El triangulo ingresado";
    cout << "Lado 1 = ";
    cout << lado1;
    cout << " Lado 2 = ";
    cout << lado2;
    cout << " Lado 3 = ";
    cout << lado3;
    cout << "\n";
}
void Triangulo::Queladoes(){
    if (lado1 == lado2 && lado1 == lado3 && lado2 == lado3){
        cout << "Equilatero";
        cout << "\n";
    }else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
        cout << "Isoceles";
        cout << "\n";
    }else{
        cout << "Escaleno";
        cout << "\n";
    }
}
int main(){
    Triangulo tri1;
    Triangulo tri2;
    Triangulo tri3;
    tri1.inicializar();
    tri1.imprimir();
    tri1.Queladoes();
    cin.get();
    tri2.inicializar();
    tri2.imprimir();
    tri2.Queladoes();
    cin.get();
    tri3.inicializar();
    tri3.imprimir();
    tri3.Queladoes();
    
    return 0;
}