//ANIDAR ESTRUCTURAS
#include <iostream>
using namespace std;

struct Direccion{
   string avenida;
   int numero;
};

struct Persona{
   string nombre;
   int edad;
   Direccion dir;
};

int main() {

  Persona p = {"Carlos", 20, {"Avenida 2 de mayo", 234}};

  cout << "Nombre: " << p.nombre << endl;
  cout << "Edad: " << p.edad << endl;

  cout << "Direccion: " << p.dir.avenida << " " << p.dir.numero;

  return 0;
  
}
