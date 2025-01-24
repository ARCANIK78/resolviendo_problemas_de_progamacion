// En un curso de 4 alumnos se registraron las notas de sus exámenes y se deben procesar de acuerdo a lo siguiente:
// a) Ingresar Nombre y Nota de cada alumno (almacenar los datos en dos vectores paralelos)
// b) Realizar un listado que muestre los nombres, notas y condición del alumno. En la condición, 
//   colocar "Muy Bueno" si la nota es mayor o igual a 8, "Bueno" si la nota está entre 4 y 7, y colocar 
//   "Insuficiente" si la nota es inferior a 4.
// c) Imprimir cuantos alumnos tienen la leyenda “Muy Bueno”. 
#include <iostream>
using namespace std;
class Alumnos{
    private:
    string alum[100];
    int nota[100];
    int contador;
    public:
    void entrada();
    void listado();
};
void Alumnos::entrada(){
    cout << "Ingrese Nombre y Nota de cada alumons ";
    cout << "\n";
    for (int x=0;x<4;x++){
        cin >> alum[x];
        cin >> nota[x];
    }
}
void Alumnos::listado(){
    contador= 0;
    for(int z = 0; z<4;z++){
        if(nota[z] >= 8){
            cout << "Alumno ";
            cout << " = ";
            cout << alum[z];
            cout << " Nota ";
            cout << nota[z];
            cout << " Muy Bueno ";
            cout <<"\n";
            contador++;
        }else if(nota[z]>=4 && nota[z]<=7){
            cout << "Alumno ";
            cout << " = ";
            cout << alum[z];
            cout << " Nota ";
            cout << nota[z];
            cout << " Bueno ";
            cout <<"\n";
        }else{
            cout << "Alumno ";
            cout << " = ";
            cout << alum[z];
            cout << " Nota ";
            cout << nota[z];
            cout << " Insuficiente ";
            cout <<"\n";
        }
    }
    cout << "Cantidad de alumnos muy buenos = ";
    cout << contador;
    cout << "\n";
}
int main(){
    Alumnos n1;
    n1.entrada();
    n1.listado();
}