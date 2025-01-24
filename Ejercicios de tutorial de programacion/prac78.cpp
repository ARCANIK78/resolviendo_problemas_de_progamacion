#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;
class OrdenarLetras{
    private:
    char paisess[100][40]; //1[tamaño del vector], 2[tamaño de caracteres]
    public:
    void entrada();
    void ordenar();
    void salida();
};
void OrdenarLetras::entrada(){
    for(int x=0;x<5;x++){
        cin >> paisess[x];
    }
}
void OrdenarLetras::ordenar(){
    for (int y=0;y<4;y++){
        for (int j=0;j<4;j++){
            if (strcmp(paisess[j],paisess[j+1])>0){
                char aux[40];
                strcpy(aux,paisess[j]);
                strcpy(paisess[j],paisess[j+1]);
                strcpy(paisess[j+1],aux);
            }
        }
    }
}
void OrdenarLetras::salida(){
    for (int s=0;s<5;s++){
        cout << paisess[s];
        cout << " ";
    }
}
int main(){
    OrdenarLetras eje1;
    eje1.entrada();
    eje1.ordenar();
    eje1.salida();
}

