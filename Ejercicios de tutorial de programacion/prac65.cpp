#include <iostream>
using namespace std;
class Pruevavector1{
    private: 
    int n;
    int sueldos[100];
    public:
    void cargar();
    void imprimir();
};
void Pruevavector1::cargar(){
    cout << "Ingrese un valor n:";
    cin >> n;
    for (int f=0;f < n;f++){
        cout << "Ingrese valor del cliente  ";
        cout << f;
        cout << ": ";
        cin >> sueldos[f];
    }
}
void Pruevavector1::imprimir(){
    cout <<"Listado de sueldos.";
    cout <<"\n";
    for (int f = 0; f < n; f++){
        cout << "cliente ";
        cout << f;
        cout << " = ";
        cout <<sueldos[f];
        cout <<"\n";
    }
}
int main(){
    Pruevavector1 pv1;
    pv1.cargar();
    pv1.imprimir();
    return 0;
}