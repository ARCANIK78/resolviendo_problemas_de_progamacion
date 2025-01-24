#include <iostream>
using namespace std;
int main(){
    int nota;
    cin >> nota;
    if (nota > 90){
        cout << "máximo";
    }else if (nota > 75){
        cout << "medio";
    }else if (nota > 50){
        cout << "Regular";
    }else{
        cout << "Fuera";
    }    
}   