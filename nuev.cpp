#include <iostream>
using namespace std;

int main()
{
    int horasTrabajadas, costoHora, sueldo;

    cin >> horasTrabajadas;
    cin >> costoHora;

    sueldo = costoHora * horasTrabajadas;
    cout << sueldo;
    return 0;

}
