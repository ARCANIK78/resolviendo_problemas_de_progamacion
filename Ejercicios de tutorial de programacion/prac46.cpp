#include <iostream>
using namespace std;
int main(){
    int x,f,valor;
    do{
        cin >> valor;
        if(valor > 100){
            cout << "tiene 3 digitos";
        }else{
            if(valor > 10){
                cout << "Tiene 2 digitos";
            }else{
                cout << "Tiene 1 digitos";
            }
        }
        cout <<"\n";
    }while(valor != 0);
}