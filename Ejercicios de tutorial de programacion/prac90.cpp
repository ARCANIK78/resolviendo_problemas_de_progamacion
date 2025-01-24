/*Plantear una clase llamada Moneda. Al constructor llega como parámetro el valor de la moneda (1,5,50 o 100) 
Definir luego dos objetos de esta clase con valores de moneda 5 y 50.
 */
 #include <iostream>
 using namespace std;
 class Moneda{
    private:
    int valor;
    public:
    Moneda(int v);
    void imprimir();
 };
 Moneda::Moneda(int v){
    valor=v;
 }
 void Moneda::imprimir(){
    cout << "Moneda = "<< valor;
    cout << "\n";
 }
 int main(){
    Moneda p1(5);
    Moneda p2(50);
    p1.imprimir();
    p2.imprimir();
 }
