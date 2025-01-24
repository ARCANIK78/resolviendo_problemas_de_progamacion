#include <iostream>
using namespace std;
class Plano{
    private:
    int x,y;
    public:
    void entrada();
    void salida();
    void cuadrante();
};
void Plano::entrada(){
    cout << "Ingrese datos";
    cout << "\n";
    cout << "X = ";
    cin >> x;
    cout << "Y = ";
    cin >> y;
    cout << "\n";
}
void Plano::cuadrante(){
    if (x > 0 && y > 0){
        cout << "Cuadrante 1";
        cout << "\n";
    }else if (x < 0 && y > 0){
        cout << "Cuadrante 2";
        cout << "\n";
    }else if (x > 0 && y < 0){
        cout << "Cuadrante 4";
        cout << "\n";
    }else{
        cout << "Cuadrante 3";
        cout << "\n";
    }
}
void Plano::salida(){
    cout << "----El-Plano-Cuadrante-------";
    cout << "\n";
}
int main(){
    Plano prueba1;
    prueba1.entrada();
    prueba1.salida();
    prueba1.cuadrante();
    
}