//Confeccionar un programa que permita cargar los nombres de 5 alumnos y sus notas respectivas. 
//  Luego ordenar las notas de mayor a menor. Imprimir las notas y los nombres de los alumnos.
 #include <iostream>
 #include <cstring>
 using namespace std;
 class AlumnosO{
    private:
    char nombre[100][40];
    int nota[100];
    public:
    void entrada();
    void ordenar();
    void salida();
 };
void AlumnosO::entrada(){
    cout << "Ingrese Nombre y Nota en la misma Linea--";
    cout << "\n";
    for(int x=0;x<5;x++){
        cin >> nombre[x];
        cin >> nota[x];
    }
}
void AlumnosO::ordenar(){
    for (int y=0;y<4;y++){
        for(int j=0;j<4;j++){
            if(nota[j]<nota[j+1]){
                int aux;
                char auxnombre[40];
                aux=nota[j];
                nota[j]=nota[j+1];
                nota[j+1]=aux;
                strcpy(auxnombre,nombre[j]);
                strcpy(nombre[j],nombre[j+1]);
                strcpy(nombre[j+1],auxnombre);
            }
        }
    }
}
void AlumnosO::salida(){
    cout << "Lista de mejor nota a peor";
    cout << "\n";
    for(int z=0;z<5;z++){
        cout << "Alumno = ";
        cout << nombre[z];
        cout << " nota = ";
        cout << nota[z];
        cout << "\n";
    }
}
int main(){
    AlumnosO per1;
    per1.entrada();
    per1.ordenar();
    per1.salida();
}