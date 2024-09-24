//FUNCION CON PARAMETRO ESTRUCTURA
#include <iostream>
using namespace std;

struct Persona{
   string nombre;
   int edad;
};


void mostrarPersona(Persona q){
   cout << "Nombre: " << q.nombre << endl;
   cout << "Edad: " << q.edad << endl;
   
}

int main() {
   Persona p = {"Juan", 23};
   mostrarPersona(p);

   return 0;
}
