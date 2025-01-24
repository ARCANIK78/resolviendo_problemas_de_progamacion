/*Desctrcutor de la clase
Mostrar la tabla de multiplicar de un valor que se ingresa por teclado. En el constructor pedir el entero. Al finalizar el programa mostrar un mensaje de despedida (este mensaje mostrarlo en el destructor).
*/
#include <iostream>
using namespace std;
class Tabla{
    private:
    int valor;
    public:
    Tabla();
    void imprimir();
    ~Tabla();
};
Tabla::Tabla(){
    cin >> valor;
}
void Tabla::imprimir(){
    for(int x=1;x <= 10;x++){
        cout << x * valor<< " ";
    }
    cout << "\n";
}
Tabla::~Tabla(){
    cout << "El Operacion a Terminado.";
}
int main(){
    Tabla p1;
    p1.imprimir();
}