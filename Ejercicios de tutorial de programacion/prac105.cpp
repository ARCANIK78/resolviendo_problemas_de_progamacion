/*Confeccionar una clase Persona que tenga como atributos el nombre y la edad. x
Definir como responsabilidades un método que cargue los datos personales y otro que los imprima. x
Plantear una segunda clase Empleado que herede de la clase Persona. x
 Añadir un atributo sueldo y los métodos de cargar el sueldo e imprimir su sueldo.X
Definir un objeto de la clase Persona y llamar a sus métodos. También crear un objeto de la clase Empleado y llamar a sus métodos. 
*/
#include <iostream>
using namespace std;
class Persona{
    protected:
    string nombre;
    int edad;
    public:
    void cargar();
    void imprimir();
};
class Empleado: public Persona{
    private:
    int sueldo;
    public:
    void cargarSueldo();
    void imprimirSueldo();
};
void Persona::cargar(){
    cout << "Nombre: ";
    cin >> nombre;
    cout << "Edad: ";
    cin >> edad;
}
void Persona::imprimir(){
    cout << "\n" << "Persona: " << nombre << "\n" << "Edad: " << edad << "\n";
}
void Empleado::cargarSueldo(){
    cout << "Ingrese su sueldo: " ;
    cin >> sueldo;
}
void Empleado::imprimirSueldo(){
    cout << "Sueldo del Empleado: " << sueldo << "\n";
}
int main(){
    Empleado p1;
    p1.cargar();
    p1.cargarSueldo();
    p1.imprimir();
    p1.imprimirSueldo();
}
