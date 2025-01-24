#include <iostream>
using namespace std;
class Oredenamiento{
    public:
    int vector[5];
    public:
    void entrada();
    void ordenar();    
};
void Oredenamiento::entrada(){
    for (int x = 0; x<5;x++){
        cin >> vector[x];
    }
}
// 10  9 11
void Oredenamiento::ordenar(){
    int aux;
    aux=0;
    for (int fun = 0; fun < 4; fun ++){
        for (int y = 0;y<4;y++){
            if(vector[y]>vector[y+1]){  // 10 > 9 correcto
                aux=vector[y]; // aux= 10
                vector[y]=vector[y+1]; //10 == 9 ahora es vector[9]
                vector[y+1]=aux ;// 9 == 10  ahora es vector[10]
            }
        }
    }
    
    for (int z = 0; z <5;z++){
        cout << vector[z];
        cout << " ";
    }
}
int main(){
    Oredenamiento pru1;
    pru1.entrada();
    pru1.ordenar();
}