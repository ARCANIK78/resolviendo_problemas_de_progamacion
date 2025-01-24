/* Confeccionar una clase llamada Sumatoria que solicite la carga valores enteros por teclado.
 Finalizar la carga de valores al ingresar el cero. Mostrar en el destructor la suma de los valores ingresados. */
 #include <iostream>
 using namespace std;
 class Sumatoria{
    private:
    int a;
    int total;
    public:
    Sumatoria();
   // void sumar();
    ~Sumatoria();
 };
 Sumatoria::Sumatoria(){
    do{
        cin >> a;
        total=total + a;
    }while(a != 0);
 }
 Sumatoria::~Sumatoria(){
    cout << "Total de la Suma es = " << total;
 }
 int main(){
    Sumatoria p1;

 }