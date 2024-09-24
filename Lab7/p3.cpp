//PUNTERO A ESTRUCTURAS
#include <iostream>
using namespace std;

struct Personas{
   string nombre;
   int edad;
};

int main() {
   Personas p;
   p.nombre = "Jose";
   p.edad = 20;

   Personas *ptr = &p;

   cout << "Nombre: " << ptr->nombre << endl;
   cout << "Edad: " << ptr->edad << endl;

   //Forma alterniva
   cout << "\n\n";
   cout << "Nombre: " << (*ptr).nombre << endl;
   cout << "Edad: " << (*ptr).edad << endl;
   
}
