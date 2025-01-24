//  Cargar en un vector los nombres de 5 paises y en otro vector paralelo la cantidad de habitantes del mismo. 
//  Ordenar alfabéticamente e imprimir los resultados. Por último ordenar con respecto a la cantidad de habitantes 
//  (de mayor a menor) e imprimir nuevamente.
#include <iostream>
#include <cstring>
using namespace std;
class habitantes{
    private:
    char paises[100][40]; // cantidad de vector || cantidad de caracteres
    int cantidad[100];
    public:
    void entrada();
    void ordenAlfa();
    void mayormenor();
    void menoamyor();
};
void habitantes::entrada(){
    cout << "Ingrese Pais y habitantes" << "\n";
    for(int x=0;x<5;x++){
        cin >> paises[x];
        cin >> cantidad[x];
    }
}
void habitantes::ordenAlfa(){
    for (int f =0;f<4;f++){
        for(int ff=0;ff<4;ff++){
            if(strcmp(paises[ff],paises[ff+1])>0){
                char auxpais[40];
                strcpy(auxpais,paises[ff]);
                strcpy(paises[ff],paises[ff+1]);
                strcpy(paises[ff+1],auxpais);
                int auxi;
                auxi = cantidad[ff];
                cantidad[ff]=cantidad[ff+1];
                cantidad[ff+1]=auxi;
            }
        }
    }
    cout << "-------------Lista de Orden Alfabetico -------------" <<"\n";
    for (int j=0;j<5;j++){
        cout << paises[j] << " habitantes " << cantidad[j] << "\n";
    }
}
void habitantes::mayormenor(){
    for (int yy=0;yy<4;yy++){
        for (int y=0;y<4;y++){
            if(cantidad[y]<cantidad[y+1]){
                int aux;
                aux=cantidad[y];
                cantidad[y]=cantidad[y+1];
                cantidad[y+1]=aux;
                char auxpais1[40];
                strcpy(auxpais1,paises[y]);
                strcpy(paises[y],paises[y+1]);
                strcpy(paises[y+1],auxpais1);
            }
        }
    }
    cout << "-------------Lista de Mayor a Menor-------------" <<"\n";
    for (int j=0;j<5;j++){
        cout << paises[j] << " habitantes " << cantidad[j] << "\n";
    }
}
void habitantes::menoamyor(){
    for (int k=0;k<4;k++){
        for (int l=0;l<4;l++){
            if(cantidad[l]>cantidad[l+1]){
                int aux;
                aux=cantidad[l];
                cantidad[l]=cantidad[l+1];
                cantidad[l+1]=aux;
                char auxpais11[40];
                strcpy(auxpais11,paises[l]);
                strcpy(paises[l],paises[l+1]);
                strcpy(paises[l+1],auxpais11);
            }
        }
    }
    cout << "-------------Lista de Menor a Mayor--------------" <<"\n";
    for (int j=0;j<5;j++){
        cout << paises[j] << " habitantes " << cantidad[j] << "\n";
    }
}
int main(){
    habitantes ej;
    ej.entrada();
    ej.ordenAlfa();
    ej.mayormenor();
    ej.menoamyor();
}