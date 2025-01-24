#include <iostream>
#include <cstring>
using namespace std;
class Cliente{
    private:
    char nombre[40];
    int edad;
    char sexo[40];
    int movimientos;
    int monto;
    public:
    Cliente(const char nom[40],const int ed,const char sexi[40]);
    void depositar(int m);
    void extraer(int m);
    int retornarMonto();
    void imprimir();
};
class Banco{
    Cliente c1, c2, c3 ;
    public:
    Banco();
    void operar();
    void depositosTotales();
};
Cliente::Cliente(const char nom[40],const int ed,const char sexi[40]){
    strcpy(nombre,nom);
    edad =ed;
    monto=0;
    movimientos=0;
    strcpy(sexo,sexi);
}
void Cliente::depositar(int m){
    if(edad > 18){
        monto=monto + m;
        movimientos++;
    }else{
        monto=0;
    }
}
void Cliente::extraer(int m){
    if(edad > 18){
        monto=monto - m;
         movimientos++;
    }else{
        monto=0;
    }
}
int Cliente::retornarMonto(){
    return monto;
}
void Cliente::imprimir(){
    cout << "----------"<<"\n";
    cout << "Nombre: " << nombre << "\n" << "Edad: " << edad << "\n" << "Sexo: " << sexo << "\n" << "Monto: " << monto << "\n" << "Movimeintos: "<<movimientos<< "\n";
    cout << "----------"<<"\n";
}
Banco::Banco(): c1("Juan",35,"Masculino"), c2("Mariam",25,"Femenina"), c3("Luis",19,"Masculino"){
}
void Banco::operar(){
    c1.depositar(500);
    c2.depositar(990);
    c3.depositar(1000);
    c2.extraer(200);
    c3.extraer(100);
    c1.depositar(400);
    c3.depositar(700);
    c2.extraer(150);
    c2.depositar(1000);
    c1.extraer(850);
    c3.extraer(1597);
}
void Banco::depositosTotales(){
    int t;
    cout << "----Total Despositos-----" << "\n";
    t = c1.retornarMonto() + c2.retornarMonto() + c3.retornarMonto();
    cout << "MontoTotal = " << t << "\n";
    c1.imprimir();
    c2.imprimir();
    c3.imprimir();
}
int main(){
    Banco p1;
    p1.operar();
    p1.depositosTotales();
    return 0;
}

