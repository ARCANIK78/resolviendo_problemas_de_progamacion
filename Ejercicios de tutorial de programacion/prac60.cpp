//Implementar la clase operaciones. 
//Se deben cargar dos valores enteros, 
// calcular su suma, resta, multiplicación y división, cada una en un método,
//  imprimir dichos resultados. 
#include <iostream>
using namespace std;
class Operaciones{
    private:
    int valor1,valor2;
    public:
    void entrada();
    void sumar();
    void resta();
    void multiplicacin();
    void divisin();
};
void Operaciones::entrada(){
    cin >> valor1;
    cin >> valor2;
    cout << "\n";
}
void Operaciones::sumar(){
    int sumaita ;
    sumaita = valor1 + valor2;
    cout << sumaita;
    cout << "\n";
}
void Operaciones::resta(){
    int restita;
    restita = valor1 - valor2;
    cout << restita;
    cout << "\n";
}
void Operaciones::multiplicacin(){
    int multiplicacioncita;
    multiplicacioncita = valor1 * valor2;
    cout << multiplicacioncita;
    cout << "\n";
}
void Operaciones::divisin(){
    int divisioncita;
    divisioncita = valor1 / valor2;
    cout << divisioncita;
    cout << "\n";
}
int main(){
    Operaciones prueba1;
    prueba1.entrada();
    prueba1.sumar();
    prueba1.resta();
    prueba1.multiplicacin();
    prueba1.divisin();
}
