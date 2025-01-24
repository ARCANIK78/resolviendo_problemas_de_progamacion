#include <iostream>
using namespace std;
int main(){
    int n, f , nota, aprobados,reprobados, suma;
    cin >> n;
    aprobados = 0;
    reprobados = 0;
    for (f=1; f < n+1; f++){
        cin  >> nota ;
        if (nota >= 70){
            aprobados = aprobados + 1;
        }else{
            reprobados = reprobados + 1;
        }
    }
    cout << "Total de alumnos aprobados = ";
    cout << aprobados;
    cout << "\n";
    cout << "Total de alumnos reprobrados = ";
    cout << reprobados;    
    cout << "\n";
    
    return 0;

}