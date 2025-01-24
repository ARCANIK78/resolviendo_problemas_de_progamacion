#include <iostream>
using namespace std;
int main(){
    int x;
    string intentos, contraseña;
    contraseña = "Luis";
    do{
        cin >> intentos;
        if(intentos == contraseña){
            cout << "Contraseña correcta";
            cout <<"\n";
        }else{
            cout << "Contraseña Incorrecta";
            cout <<"\n";
        }
      
    }while(intentos != contraseña);
}