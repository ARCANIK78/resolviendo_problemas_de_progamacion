// Se tiene la siguiente información:
//· Nombres de 4 empleados.X
//· Ingresos en concepto de sueldo, cobrado por cada empleado, en los últimos 3 meses.X
//Confeccionar el programa para:

//a) Realizar la carga de la información mencionada. X
//b) Generar un vector que contenga el ingreso acumulado en sueldos en los últimos 3 meses para cada empleado. X
//c) Mostrar por pantalla el total pagado en sueldos a todos los empleados en los últimos 3 meses  X
//d) Obtener el nombre del empleado que tuvo el mayor ingreso acumulado 
#include <iostream>
using namespace std;
class Empleados{
    private:
    char nombre[100][40];
    int sueldos[100][100];
    int totalsueldo[100];
    public:
    void carga();
    void total();
    void mostrar();
    void mayorEmpleado();
};

void Empleados::carga(){
    for(int x=0;x<4;x++){
        cin >> nombre[x];
        for(int y=0;y<3;y++){
            cin >> sueldos[x][y];
        }
    }
}
void Empleados::total(){
    int suma;
    suma=0;
    for(int a=0;a<4;a++){
        for(int b=0;b<3;b++){
            suma=suma+sueldos[a][b];
            totalsueldo[a]=suma;
        }
        suma=0;
    }
    
}
void Empleados::mostrar(){
    cout << "Nombre----sueldo 3 meses---------total" << "\n";
        for(int v=0;v<4;v++){
            cout << nombre[v] << " - ";
            for(int vv=0;vv<3;vv++){
                cout << sueldos[v][vv] <<" ";
            }
            cout << "  =  "<<totalsueldo[v] << "\n";
        }
}
void Empleados::mayorEmpleado(){
    int mayor, pos;
    mayor=totalsueldo[0];
    pos=0;

    for(int f=0;f<4;f++){
        if(totalsueldo[f]>mayor){
            mayor=totalsueldo[f];
            pos=f;
        }
    }
    cout << "El Empleado = " << nombre[pos] << " Con Mayor Salario de = " << totalsueldo[pos] << "\n";
}
int main(){
    Empleados per;
    per.carga();
    per.total();
    per.mostrar();
    per.mayorEmpleado();
}

/*
Jose 500 500 500 
Miriam 300 300 300 
Jose 200 300 400 
Luis 33 33 33 

Diego 350 1000 340
Britney 400 232 120
Juan 323 444 909
Greminger 1000 23000 3200
*/