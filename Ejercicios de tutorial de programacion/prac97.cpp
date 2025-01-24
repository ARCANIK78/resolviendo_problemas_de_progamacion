#include <iostream>
using namespace std;
class Mate{
    public:
    int mayor(int a ,int b);
    int mayor(int a, int b,int c );
    float mayor(float a, float b);
    float mayor(float a, float b, float c );
};
int Mate::mayor(int a ,int b){
    if(a > b){
        return a;
    }else{
        return b;
    }
}
int Mate::mayor(int a, int b,int c ){
    if(a > b){
        if(a > c){
            return  a;
        }else{
            return c;
        }
    }else{
        return b;
    }
}
float Mate::mayor(float a, float b){
    if(a > b){
        return a;
    }else{
        return b;
    }

}
float Mate::mayor(float a, float b, float c ){
    if(a > b){
        if(a > c){
            return a;
        }else{
            return c;
        }
    }else{
        return b;
    }
}
int main(){
    Mate p1;
    cout << "Quien es mayor de (6 y 8) = ";
    cout << p1.mayor(6,8) << "\n";
    cout << "Quien es mayor de (10, 40 y 5) = ";
    cout << p1.mayor(10,40,5)<<"\n";
    cout << "Quien es mayor de (6.2  y  9.3) = ";
    cout << p1.mayor(6.2f, 9.3f) << "\n";
    cout << "Quien es mayor de (7 y 12.5 y 4.2) = ";
    cout << p1.mayor(7.0f,12.5f,4.2f) << "\n";
    return 0;
}

