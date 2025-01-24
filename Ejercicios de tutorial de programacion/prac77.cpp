#include <iostream>
using namespace std;
class OrdenamientoOtraves{
    private:
    int vector[100];
    public:
    void entrada();
    void ordenarr();
    void mostrar();
};
void OrdenamientoOtraves::entrada(){
    cout << "Ingrese datos";
    cout << "\n";
    for (int x = 0; x <5;x++){
        cin >> vector[x];
    }
}

void OrdenamientoOtraves::ordenarr(){
    int aux;
    for (int f=0;f<4;f++){
        for (int y=0;y<4;y++){
            if (vector[y]<vector[y+1]){  
                aux=vector[y]; 
                vector[y]=vector[y+1]; 
                vector[y+1]=aux; 
            }
        }
    }
}
void OrdenamientoOtraves::mostrar(){
    for (int z=0;z<5;z++){
        cout << vector[z];
        cout << " ";
    }
}
int main(){
    OrdenamientoOtraves pru1;
    pru1.entrada();
    pru1.ordenarr();
    pru1.mostrar();
}