/* Plantear una clase Club y otra clase Socio.
La clase Socio debe tener los siguientes atributos
 privados: nombre y la antigüedad en el club (en años).
En el constructor pedir la carga del nombre y su antigüedad. 
La clase Club debe tener como atributos 3 objetos de la clase Socio. 
Definir una responsabilidad para imprimir el nombre del socio con mayor antigüedad en el club. */
#include <iostream>
#include <cstring>
#include<cstdlib>
#include<ctime>
using namespace std;
class Socio{
    private:
    char nombre[40];
    int antiguedad;
    public:
    Socio(const char nom[40]);
    void imprimir();
    void generar();
    int retornaAntiguedad();
};
class Club{
    private:
    Socio s1, s2, s3;
    public:
    Club();
    void mayorAntiguedad();
};
Socio::Socio(const char nom[40]){
    strcpy(nombre,nom);
}
void Socio::generar(){
    antiguedad = rand()% 50 + 1;
}
void Socio::imprimir(){
    cout << "\n";
    cout<< "Nombre: " << nombre << "\n"<<"Antiguedad: " << antiguedad << "\n";
}
int Socio::retornaAntiguedad(){
    return antiguedad;
}
Club::Club(): s1("Jose Roberto"), s2("Miriam bb"), s3("Andriu"){

}
void Club::mayorAntiguedad(){
    s1.generar();
    s1.imprimir();
    s2.generar();
    s2.imprimir();
    s3.generar();
    s3.imprimir();
    cout << "--Socio con mayor antiguedad--" << "\n";
    if(s1.retornaAntiguedad() > s2.retornaAntiguedad()){
        if(s1.retornaAntiguedad() > s3.retornaAntiguedad()){
            s1.imprimir();
        }else{
            s3.imprimir();
        }
    }else{
        s2.imprimir();
    }
}
int main(){
    srand(time(NULL));
    Club p1;
    p1.mayorAntiguedad();
}
