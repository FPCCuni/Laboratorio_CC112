//ASINACION DINAMICA CON ESTRUCTURAS
#include <iostream>
#include <string>
using namespace std;

struct Persona{
   string nombre;
   int edad;
};

int main() {
  Persona *p = new Persona;
  p->nombre = "Juan";
  p->edad = 23;

  cout << "Nombre: " << p->nombre << endl;
  cout << "Edad: " << p->edad << endl;
}
