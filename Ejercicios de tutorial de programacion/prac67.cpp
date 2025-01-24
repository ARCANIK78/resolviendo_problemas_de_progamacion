//Una empresa tiene dos turnos (mañana y tarde) en los que trabajan 8 empleados (4 por la mañana y 4 por la tarde)
//Confeccionar un programa que permita almacenar los sueldos de los empleados agrupados por turno.
//Imprimir los gastos en sueldos de cada turno.
#include <iostream>
using namespace std;
class Empresa{
    private:
    int manana[4];
    int tarde[4];
    public:
    void almacenar();
    void imprimir();
};
void Empresa::almacenar(){
    int gastosMañana, gastosTarde;
    gastosMañana = 0;
    gastosTarde = 0;
    cout << "Ingrese los sueldos de la Mañana ";
    cout << "\n";
    for (int x = 1; x<=4;x++){
        cout << "Empleado ";
        cout << x;
        cout << " = ";
        cin >> manana[x];
        gastosMañana = gastosMañana + manana[x];
    }
    cout << "Ingrese los sueldos de la tarde";
    cout << "\n";
    for (int y = 1; y<=4;y++){
        cout << "Empleado ";
        cout << y;
        cout << " = ";
        cin >> tarde[y];
        gastosTarde = gastosTarde + tarde[y];
    }
    cout << "Gasto total de turno mañana = ";
    cout << gastosMañana;
    cout << "\n";
    cout << "Gstos total de turno tarde = ";
    cout << gastosTarde;
    cout << "\n";
    cout << "Total gastos = ";
    cout << gastosMañana+gastosTarde;
    cout << "\n";
}
int main(){
    Empresa per1;
    per1.almacenar();
    return 0;
}