#include <iostream>
using namespace std;
class Cuadrado{
    private:
    int lado;
    public:
    void inicializar();
    void superficie();
    void perimetro();
};
void Cuadrado::inicializar(){
    cout << "Ingresa la cantidad del lado = ";
    cin >> lado;
}
void Cuadrado::perimetro(){
    int sumaPeri ;
    sumaPeri = lado * 4;
    cout << "Perimetro = ";
    cout << sumaPeri;
    cout << "\n";
}
void Cuadrado::superficie(){
    int sumaSuperfi ;
    sumaSuperfi = lado * 2;
    cout << "Superficie = ";
    cout << sumaSuperfi;
    cout << "\n";
}
int main(){
    Cuadrado prueba1;
    prueba1.inicializar();
    prueba1.perimetro();
    prueba1.superficie();
}