// DEFINIENDO UN ARREGLO DE ESTRUCTURAS

#include <iostream>
#include <string>
using namespace std;

struct Persona{
   string nombre;
   int edad;
};

int main() {

   //Primera forma de ingreso de datos
   /*
   Persona personas[3]; // arreglo de estructuras
   // ingreso de datos
   for(int i=0; i<3; i++){
      cout << "Ingrese el nombre " << i+1 << ": ";
      cin >> personas[i].nombre;
      cout << "Ingrese la edad " << i+1 << ": ";
      cin >> personas[i].edad;
   }
   */

   //segunda forma de ingreso de datos
   Persona personas[3] = {{"Juan", 23}, {"Pedro", 12}, {"Raul",29}};

   //mostrandos los datos
   for(int i=0; i<3; i++){
      cout << "Nombre " << i+1 << ": " << personas[i].nombre << endl;
      cout << "Edad " << i+1 << ": " << personas[i].edad << endl;
   }
   
}
