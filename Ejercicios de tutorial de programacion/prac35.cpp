#include <iostream>
using namespace std;
int main(){
    int f, n, valor, alma,proomedio;
    cin >> n;
    for (f=1; f<n+1; f++){
        cin >> valor;
        alma = alma + valor;
    }
    cout << "El promedio es ";
    proomedio = alma / n;
    cout << proomedio;
    cout << "\n";

}