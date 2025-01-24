/*Plantear un programa que permita jugar a los dados. 
Las reglas de juego son: se tiran tres dados si los tres salen con el mismo valor mostrar un mensaje que "gano", sino "perdió".
Lo primero que hacemos es identificar las clases:
Podemos identificar la clase Dado y la clase JuegoDeDados.
Luego los atributos y los métodos de cada clase:

Dado		
    atributos
        valor
    métodos
        tirar
        imprimir
        retornarValor

JuegoDeDados
    atributos
        3 Dado (3 objetos de la clase Dado)
    métodos
        jugar       */
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
class Dado{
    private:
    int valor;
    public:
    void tirar();
    void imprimir();
    int retornarValor();
};
class JuegoDeDados{
    private:
    Dado d1,d2,d3;
    public:
    void jugar();
};
void Dado::tirar(){
    valor = rand() % 6 + 1;
}
void Dado::imprimir(){
    cout << "Valor del dado: "<< valor << "\n";
}
int Dado::retornarValor(){
    return valor;
}
void JuegoDeDados::jugar(){
    d1.tirar();
    d1.imprimir();
    d2.tirar();
    d2.imprimir();
    d3.tirar();
    d3.imprimir();
    if(d1.retornarValor() == d2.retornarValor() && d1.retornarValor() == d3.retornarValor() && d2.retornarValor() == d3.retornarValor()){
        cout << "Gano El Juego" << "\n";
    }else{
        cout << "Perdio El Juego" << "\n";
    }
}
int main(){
    srand(time(NULL));
    JuegoDeDados p1;
    p1.jugar();
}

