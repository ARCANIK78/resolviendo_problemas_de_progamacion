#include <iostream>
using namespace std;

int main()
{
    int horasTrabajadas, costoHora, sueldo;

    cin >> horasTrabajadas;
    cin >> costoHora;

    sueldo = costoHora * horasTrabajadas;
    cout << sueldo;
    cin.get();
    return 0;

}
