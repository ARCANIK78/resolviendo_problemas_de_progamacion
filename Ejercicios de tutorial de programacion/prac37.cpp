#include <iostream>
using namespace std;
int main(){
    int n,f, valor,mul3, mult5,noson;

    cin >> n;
    for (f=1;f <=n+1; f++){
        cin >> valor;
        if (valor % 3 == 0){
            mul3 = mul3 + 1;
        }else if(valor % 5 == 0){
            mult5 = mult5 + 1;
        }else{
            noson = noson + 1;
        }
    }
    cout << "Total multiplos de 3 = ";
    cout << mul3;
    cout << "\n";
    cout << "Total multiplos de 5 = ";
    cout << mult5;
    cout << "\n";
    cout << "Total ningun multiplo = ";
    cout << noson;
    cout << "\n";
}