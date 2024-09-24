/*1. Escribir un programa que defina una clase con dos variables enteras y dos 
funciones miembros que permita ingresar los datos y mostrar los datos en 
pantalla.*/

#include <iostream>
using namespace std;

//1. Definimos la clase
class demo{
private:
    int ca;
    int cb;

public:
    void ingreso_datos(int a, int b); //declaramos funciones miembro
    void mostrar_datos();
};

//2. Definimos las funciones miembro
void demo:: ingreso_datos(int ca, int cb){
    //cout << "Ingrese los datos: ";
    this->ca = ca;
    this->cb = cb;
}

void demo::mostrar_datos(){
    cout << "ca= " << ca <<endl;
    cout << "cb= " << cb <<endl;
}



int main(){
    demo d1; //instanciamos (creamos un objeto)
    d1.ingreso_datos(10,30);
    d1.mostrar_datos();


    

    cout << "El tamaño de d1 es: " << sizeof(d1) <<endl;

    return 0; 
}