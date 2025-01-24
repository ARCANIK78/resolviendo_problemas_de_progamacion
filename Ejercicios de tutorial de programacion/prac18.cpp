 //Se ingresan tres valores por teclado,
 //si todos son iguales se imprime la suma del primero con el segundo y a este resultado se lo multiplica por el tercero. 
 #include <iostream>
 using namespace std;

 int main(){
    int num1,num2,num3, suma, multi;
    cin >> num1;
    cin >> num2;
    cin >> num3;
    if (num1 == num2 && num1 && num3 && num2 == num3){
        suma = num1 + num2;
        multi = suma * num3;
        cout << "\n";
        cout << multi;
        cout << "\n";
    }else{
        cout << "Nada";
    }
 }