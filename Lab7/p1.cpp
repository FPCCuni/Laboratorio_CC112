//DEFINICION DE ESTRUCTURA
#include <iostream>
#include <string>
using namespace std;

struct Persona{
   string nombre;//char nombre[30];
   string apellidos;
   int edad;
}; 

int main() {
   Persona p;

   p.nombre = "Juan";
   p.apellidos = "Perez Gomez";
   p.edad = 20;

   /*
   cout << "ingrese el nombre: ";
   cin.getline(p.nombre,30);

   cout << "Ingrese los apellidos: ";
   cin >> p.apellidos;

   cout << "ingrese la edad: ";
   cin >> p.edad;
   */

   cout << "\n\nLos datos ingresados son: \n";
   cout << "Nombre: " << p.nombre << endl;
   cout << "Apellidos: " << p.apellidos << endl;
   cout << "Edad: " << p.edad << endl;
   
   
   
}
