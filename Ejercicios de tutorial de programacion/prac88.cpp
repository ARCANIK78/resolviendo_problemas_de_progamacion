/*
Se desea guardar los sueldos de 5 operarios en un vector. Realizar la carga del vector en el constructor.
*/
#include <iostream>
using namespace std;
class Sueldos{
    private:
    int v1[100];
    public:
    Sueldos();
    void imprimir();
};
Sueldos::Sueldos(){
    for(int x=0; x<5;x++){
        cin >> v1[x];
    }
}
void Sueldos::imprimir(){
    for(int y=0;y<5;y++){
        cout << v1[y] << " ";
    }
}
int main(){
    Sueldos p1;
    p1.imprimir();
}