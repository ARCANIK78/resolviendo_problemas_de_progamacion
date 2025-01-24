//Se tienen las notas del primer parcial de los alumnos de dos cursos, el curso A y el curso B, cada curso cuenta con 5 alumnos.
//Realizar un programa que muestre el curso que obtuvo el mayor promedio general. 
#include <iostream>
using namespace std;
class Cursos{
    private:
    float cursoA[5] ;
    float cursoB[5];
    float toa, tob;
    public:
    void entrada();
    void promedio();
};
void Cursos::entrada(){
    cout << "Curso A ";
    cout << "\n";
    for(int x = 0; x < 5;x++){
        cin >> cursoA[x];
        toa = toa + cursoA[x];
    }
    cout << "Curso B ";
    cout << "\n";
    for (int y = 0; y < 5;y++){
        cin >> cursoB[y];
        tob = tob + cursoB[y];
    }
}
void Cursos::promedio(){
    toa = toa / 5;
    tob = tob / 5;
    cout << "El mejor promedio es para?";
    cout << "\n";
    if (toa  > tob){
        cout << "Curso A con ";
        cout << toa;
    }else{
        cout << "Curso B con ";
        cout << tob;
    }
}
int main(){
    Cursos aa;
    aa.entrada();
    aa.promedio();
    return 0;
}