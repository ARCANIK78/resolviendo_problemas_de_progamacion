#include <iostream>
using namespace std;

class Orednamiento{
    private:
    int conta,vecto[100];
    public:
    void entrada();
    void ordenar();
    void salida();
};
void Orednamiento::entrada(){
    for (int x = 0; x<10; x++ ){
        cin >> vecto[x];
    }
}
void Orednamiento::ordenar(){
    conta = 0;
    for(int y = 0; y < 9;y++){
        if (vecto[y] < vecto[y+1]){
            conta++;
        }
    }
}
void Orednamiento::salida(){
    if(conta > 0){
        cout << "Esta ordenado de menor a mayor";
    }else{
        cout << "Esta ordenado de mayor a menor";
    }
}
int main(){
    Orednamiento prue;
    prue.entrada();
    prue.ordenar();
    prue.salida();
}