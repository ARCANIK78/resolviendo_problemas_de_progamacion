#include <iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    if (n1 > n2){
        if (n1 > n3){
            cout << "n1 es mayor = ";
            cout << n1;
        }else{
            cout << "n3 es mayor = ";
            cout << n3;
        } 
    }else{
        cout << "n2 es mayor = ";
        cout << n2;
    }
}