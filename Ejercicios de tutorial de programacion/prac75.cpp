//Confeccionar un programa que permita cargar los nombres de 5 operarios y sus sueldos respectivos. 
//Mostrar el sueldo mayor y el nombre del operario.
#include <iostream>
using namespace std;
class Operarios{
    private:
    string nombre[100];
    float sueldo[100];
    public:
    void entrada();
    void sueldomayor();
    void sueldomenor();
    void sueldorepetido();
};
void Operarios::entrada(){
    cout << "Ingrese el nombre y sueldo ";
    cout <<"\n";
    for (int x=0;x<5;x++){
        cin >> nombre[x];
        cin >> sueldo[x];
    }
}
void Operarios::sueldomayor(){
    float mayor;
    int posicion;
    mayor = 0;
    for (int y = 0; y<5;y++){
        if(sueldo[y]> mayor){
            mayor = sueldo[y];
            posicion=y;
        }
    }
    cout << "El mayor sueldo es = ";
    cout << nombre[posicion];
    cout << " de = ";
    cout << mayor;
    cout <<"\n";
}
void Operarios::sueldomenor(){
    float menor;
    int pocision;
    menor=sueldo[0];
    for(int z=0;z<5;z++){
        if(sueldo[z]<menor){
            menor=sueldo[z];
            pocision=z;
            
        }
    }
    cout << "El menor sueldo es = ";
    cout << nombre[pocision];
    cout << " de = ";
    cout << menor;

    int contador;
    contador=0;
    for (int j = 0;j<5;j++){
        if(sueldo[j] == menor){
            contador++;
        }
    }
    cout << "\n";
    if(contador>1){
        cout << "Hay repetidos";
    }else{
        cout << "No hay reetidos";
    }

    
}
int main(){
    Operarios p1;
    p1.entrada();
    p1.sueldomayor();
    p1.sueldomenor();
}