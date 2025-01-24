//Definir un vector de 5 componentes de tipo float que representen las alturas de 5 personas.
//Obtener el promedio de las mismas. Contar cuántas personas son más altas que el promedio y cuántas más bajas.
#include <iostream>
using namespace std;
class Alturas{
    private:
    int n ;
    float promedio;
    float altura[100];
    public:
    void entrada();
    void caluclarAltura();
    void mayoresomenores();
};
void Alturas::entrada(){
    cout << "Ingrese una cantidad = ";
    cin >> n;
    for (int x = 1; x<= n; x++){
        cin >> altura[x];
    }
}
void Alturas::caluclarAltura(){
    float sumar;
    for (int y = 1;y <=n ; y++){
        sumar = sumar + altura[y];
    }
    promedio = sumar / n;
    cout << "El promedio es = ";
    cout << promedio;
    cout <<"\n";
}
void Alturas::mayoresomenores(){
    int mayor , menor;
    float mayores[100];
    float menores[100];
    mayor = 0;
    menor = 0;
    
    for (int z = 1; z <= n; z++){
        if (altura[z] > promedio){
            mayor++;
            mayores[100] = altura[z];
        }else{
            menores[100]= altura[z];
            menor++;
        }
    }
    cout << "Total mayores = ";
    cout << mayor;
    cout << "son ";
    cout << mayores[100];
    cout <<"\n";
    cout << "Total menores = ";
    cout << menor;
    cout << "\n";
 
    
}
int main(){
    Alturas per1;
    per1.entrada();
    per1.caluclarAltura();
    per1.mayoresomenores();
}