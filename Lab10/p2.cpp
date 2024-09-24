/*Definir una clase Estudiante con tres miembros de datos: nombre, edad, 
ciclo y función de dos miembros. Uno para ingresar los datos y el segundo 
para mostrar los datos. Crear dos objetos ingresar y mostrar los datos de los 
estudiantes.*/
#include <iostream>
using namespace std;

class Estudiante{
    char nombre[20];
    int edad;
    char ciclo[10];

public:

    void obtenerDatos(char[], int, char[]);
    void mostrarDatos();
};

//2. Definir las funciones miembro
void Estudiante:: obtenerDatos(char nom[20], int ed, char cic[10]){
 //completar la defnicion
}

int main(){
    Estudiante s1;

    return 0; 
}