//FUNCION QUE RETORNA UNA ESTRUCTURA

#include <iostream>
#include <string>
using namespace std;

struct Persona{
   string nombre;  
   int edad;   
};

Persona crearPersona(string nombre, int edad){
   Persona p;
   p.nombre = nombre;
   p.edad = edad;

   return p;
   
}

int main() {
   Persona p = crearPersona("Raul", 20);
   cout << "Nombre: " << p.nombre << endl;
   cout << "Edad: " << p.edad << endl;

   return 0;
}
