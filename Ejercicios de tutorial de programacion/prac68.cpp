//Desarrollar un programa que permita ingresar un vector de 8 elementos, e informe:
//El valor acumulado de todos los elementos del vector.
//El valor acumulado de los elementos del vector que sean mayores a 36.
//Cantidad de valores mayores a 50.
#include <iostream>
using namespace std;
class Vectorrr{
    private:
    int vectorr[8];
    public:
    void ingresar();
    void acumulado();
};
void Vectorrr::ingresar(){
    for (int x = 1 ;x<=8;x++){
        cout << "Ingresar vector =  ";
        cin >> vectorr[x];
    }
}
void Vectorrr::acumulado(){
    int todos, mayor36, cantmayor50;
    todos=0;
    mayor36=0;
    cantmayor50=0;
    for (int y=1;y<=8;y++){
        todos = todos + vectorr[y];
        if (vectorr[y] > 36){
            mayor36 = mayor36 + vectorr[y];
        }
        if (vectorr[y] > 50){
            cantmayor50++;
        }
    }
    cout << "Todos los vectores = ";
    cout << todos;
    cout << "\n";
    cout << "Todos los mayores a 36 = ";
    cout << mayor36;
    cout << "\n";
    cout << "Cantidad mayor a 50 = ";
    cout << cantmayor50;
    cout << "\n";

}
int main(){
    Vectorrr v1;
    v1.ingresar();
    v1.acumulado();
}
    




