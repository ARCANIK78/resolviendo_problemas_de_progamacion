#include <iostream>
using namespace std;
class Personas{
    private:
    char nombre[40];
    float peso,altura;
    int edad;
    void esMayor(int edad);
    public:
    void entrada();
    void salida();
    void esObeso();
};
void Personas::entrada(){
    cout <<"Ingrese su Nombre ";
    cin.getline(nombre,40);
    cout << "Ingrese su Edad ";
    cin >> edad;
    cout << "Ingrese su peso";
    cin >> peso;
    cout << "Ingrese su altura";
    cin >> altura;
    cout << "\n";
}
void Personas::esMayor(int edad){
    if (edad > 15){
        cout << "Eres Adolecente";
    }else if (edad > 18){
        cout << "Eres Adulto";
    }else if (edad > 65){
        cout << "Eres viejo";
    }else{
        cout << "Eres un niño";
    }
    return 0;
}
void Personas::esObeso(){
    float IMC, alturaCu;
    alturaCu = altura * altura;
    IMC = peso / alturaCu;
    if(IMC < 18.5){
        cout <<"Peso inferior al normal";
    }else if(IMC > 18.5 && IMC < 24.9){
        cout << "Normal";
    }else if (IMC > 25.0 && IMC < 29.9){
        cout << "Peso Superior al normal";
    }else if(IMC > 30.0){
        cout << "Obesidad";
    }
}
void Personas::salida(){
    //int mayorono;
    int meto;
    cout << "----informe-----";
    cout << "\n";
    cout << "Nombre = ";
    cout << nombre;
    cout << "Edad = ";
    cout << edad;
    cout << "\n";
    cout << "Peso = ";
    cout << peso;
    cout << "\n";
    cout << "Altura = ";
    cout << altura;
    cout << "\n";
    cout << "Usted es ";
    meto = esMayor(edad);
    cout << meto;
    //cout << esMayor(mayorono);
}
int main(){
    Personas perso;
    perso.entrada();
    perso.salida();
}