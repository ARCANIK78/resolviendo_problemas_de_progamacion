#include <iostream>
using namespace std;
int main(){
    int x,y;
    cin >> x;
    y = 1;
    while (y <= x){
        cout << y;
        cout <<".";
        y=y+1;
    }
}