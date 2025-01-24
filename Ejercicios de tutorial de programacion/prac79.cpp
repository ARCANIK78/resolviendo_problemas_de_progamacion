//  Cargar un vector de 5 elementos enteros. Ordenarlo de mayor a menor y mostrarlo por pantalla, 
//  luego ordenar de menor a mayor e imprimir nuevamente.
#include <iostream>
using namespace std;
class Ordenarar{
    private:
    int vector[100];
    public:
    void entrada();
    void mayormenor();
    void menormayor();
};
void Ordenarar::entrada(){
    printf("Ingrese los valores del vector ");
    for(int x=0;x<5;x++){
        cin >> vector[x];
    }
}
void Ordenarar::mayormenor(){
    for(int y=0;y<4;y++){
        for(int z=0;z<4;z++){
            if(vector[z]<vector[z+1]){
                int aux;
                aux=vector[z];
                vector[z]=vector[z+1];
                vector[z+1]=aux;
            }
        }
    }
    cout <<"\n";
    cout << ("Mayor a Menor ");
    for(int h=0;h<5;h++){
        cout << vector[h];
        cout << " ";
    }
}
void Ordenarar::menormayor(){
    for(int j=0;j<4;j++){
        for(int k=0;k<4;k++){
            if(vector[k]>vector[k+1]){
                int aux1;
                aux1=vector[k];
                vector[k]=vector[k+1];
                vector[k+1]=aux1;
            }
            
        }
    }
    cout <<"\n";
    cout << ("Menor a mayor ");
    for(int g=0;g<5;g++){
        cout << vector[g];
        cout << " ";
    }
}
int main(){
    Ordenarar eje1;
    eje1.entrada();
    eje1.mayormenor();
    eje1.menormayor();
}