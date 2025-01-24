#include <iostream> 
using namespace std;
class Persona{
    private:
    void IMC(float tvalor);
    public:
    void calcularelpeso();
};
void Persona::IMC(float tvalor){
    if(tvalor <18.5){
        cout <<"Peso inferior al normal";
    }else if(tvalor > 18.5 && tvalor < 24.9){
        cout << "Normal";
    }else if (tvalor > 25.0 && tvalor < 29.9){
        cout << "Peso Superior al normal";
    }else if(tvalor > 30.0){
        cout << "Obesidad";
    }
}
void Persona::calcularelpeso(){
    float altura, peso,total;
    cout << "Ingrese la altura ";
    cin >> altura;
    cout << "Ingrese el peso ";
    cin >> peso;
    total = peso / (altura*altura);
    IMC(total);
}
int main()
{
    Persona per1;
    per1.calcularelpeso();
    return 0;
}