//Se ingresa por teclado un valor entero,
 //mostrar una leyenda que indique si el número es positivo,
 // negativo o nulo (es decir cero)
 #include <iostream>
 using namespace std;
 int main(){
    int valor;
    cin >> valor;
    if (valor > 0){
        cout << "positivo";
    }else {
        cout << "Negativo";
    }
 }