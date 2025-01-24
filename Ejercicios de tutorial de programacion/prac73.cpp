//Crear una clase que permita ingresar el nombre de 5 productos y sus respectivos precios.
// Definir dos vectores paralelos. Mostrar cuantos productos tienen un precio mayor al primer producto ingresado. 
#include <iostream>
using namespace std;
class Productos{
    private:
    string producto[100];
    int precios[100];
    public:
    void entrada();
    void mayor();
};
void Productos::entrada(){
    for (int x=0;x<5;x++){
        cout << "Nombre producto = ";
        cin >> producto[x];
        cout << "Precio del producto = ";
        cin >> precios[x];
    }
}
void Productos::mayor(){
    int cont = 0;
    for (int y=0;y<5;y++){
        if(precios[y] > precios[0]){
            cout << producto[y];
            cont++;
        }
    }
    cout << "Total productos mayor al primero = ";
    cout << cont;
}void Alumnos::salida(){

int main(){
    Productos proc1;
    proc1.entrada();
    proc1.mayor();
}