/*
1 2 3 4 5 
9 8 7 6 5 
5 4 3 2 1 
*/
#include <iostream>
using namespace std;
class Ordenar{
    private:
    int v1[100][100];
    public:
    void entrda();
    void mostrar();
};
void Ordenar::entrda(){
    cout << "Ingrese componente " << "\n";
    for(int x=0;x<3;x++){
        for(int f=0;f<5;f++){
            cin >> v1[x][f];
        }
    }
}
void Ordenar::mostrar(){
    for(int y=0;y<3;y++){
        for(int j=0;j<5;j++){
            cout << v1[y][j];
            cout << " ";
        }
        cout <<"\n";
    }
}
int main(){
    Ordenar p1;
    p1.entrda();
    cout << "\n";
    p1.mostrar();
}