//Se cuenta con la siguiente información:
//Las edades de 5 estudiantes del turno mañana.
//Las edades de 6 estudiantes del turno tarde.
//Las edades de 11 estudiantes del turno noche.
//Las edades de cada estudiante deben ingresarse por teclado.
//a) Obtener el promedio de las edades de cada turno (tres promedios)
//b) Imprimir dichos promedios (promedio de cada turno)
//c) Mostrar por pantalla un mensaje que indique cual de los tres turnos tiene un promedio de edades mayor. 
#include <iostream>
using namespace std;
int main(){
    int n,x,mañana,tarde,noche,pormedio,proM,proT,proN;{
        n = 22;
        for (x=1;x<=n;x++){
            if(x<=5){
                cout <<"mañana ";
                cout << x;
                cout <<" = ";
                cin >> mañana;
                proM= proM + mañana;
            }else if (x<=11){
                cout <<"tarde ";
                cout << x;
                cout <<" = ";
                cin >> tarde;
                proT = proT + tarde;
            }else if(x<=22){
                cout <<"noche ";
                cout << x;
                cout <<" = ";
                cin >> noche;
                proN = proN + noche;
            }
        }
        //b
        proM = proM / 5;
        proT = proT / 6;
        proN = proN / 11;
        cout << "----Informe-de-edades-2024----";
        cout << "\n";
        //a
        pormedio = (proM + proT + proN) / 3;
        cout << "Promedio de todas las edades = ";
        cout << pormedio;
        cout << "\n";
 
        cout << "Promedio turno mañana = ";
        cout << proM;
        cout << "\n";
        cout << "Promedio turno tarde = ";
        cout << proT;
        cout << "\n";
        cout << "Promedio turno noche = ";
        cout << proN;
        cout << "\n";
        cout << "Mayor edades = ";
        if (proM > proT){
            if (proM > proN){
                cout << "turno Mañana ";
                cout << proM;
            }else{
                cout << "Turno Noche ";
                cout << proN;
            }
        }else{
            cout << "Turno Tarde";
            cout << proT;
        }

    }
}