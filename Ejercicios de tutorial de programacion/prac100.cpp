/*Un banco tiene 3 clientes que pueden hacer depósitos y extracciones. También el banco requiere que al final del día calcule la cantidad de dinero que hay depositada.

Lo primero que hacemos es identificar las clases:

Podemos identificar la clase Cliente y la clase Banco.

Luego debemos definir los atributos y los métodos de cada clase:

Cliente		
    atributos
        nombre
        monto
    métodos
        constructor
        depositar
        extraer
        retornarMonto

Banco
    atributos
        3 Cliente (3 objetos de la clase Cliente)
    métodos
        constructor
        operar
        depositosTotales
*/
#include <iostream>
#include <cstring>
using namespace std;
class Clientes{
    private:
    char nombre[40];
    float monto;
    public:
    Clientes(const char nom[40]);
    void despositar(int m);
    void extraer(int m);
    float retornarMonto();
    void imprimir();
};
class Banco{
    private:
    Clientes c1,c2,c3;
    public:
    Banco();
    void operar();
    void depositosTotales();
};
Clientes::Clientes(const char nom[40]){
    strcpy(nombre,nom);
    monto=0;
}
void Clientes::despositar(int m){
    monto = monto + m;
}
void Clientes::extraer(int m){
    monto = monto - m;
}
float Clientes::retornarMonto(){
    return monto;
}
void Clientes::imprimir(){
    cout << "Nombre: "<< nombre << "\n" << "Monto: " << monto << "\n";
}
Banco::Banco(): c1("Jose"),c2("Miriam"),c3("Luis"){
}
void Banco::operar(){
    c1.despositar(100);
    c2.despositar(200);
    c3.despositar(600);
    c3.extraer(300);
}
void Banco::depositosTotales(){
    float t;
    cout << "Depositos Totales de este dia " <<"\n";
    t = c1.retornarMonto() + c2.retornarMonto() + c3.retornarMonto();
    c1.imprimir();
    c2.imprimir();
    c3.imprimir();
}
int main(){
    Banco p1;
    p1.operar();
    p1.depositosTotales();
}