// ESTRUCTURA CON FUNCIONES MIEMBRO

#include <iostream>
using namespace std;


struct Persona{
   string nombre;
   int edad;

   Persona(string a, int h) {
      nombre = a;
      edad = h;
   }
   void inicializa(string nombre, int edad){
      this -> nombre = nombre;
      this -> edad = edad;
   }

   void saludo(){
      cout << "Hola, soy " << nombre << endl;
      cout << "Tengo " << edad << " años" << endl;
   }

   void mostrar(){
      cout << "Nombre: " << nombre << endl;
      cout << "Edad: " << edad << endl;
   }

   
};

int main() {
   Persona p("Pedro", 23);
   //p.inicializa("Juan", 23);
   p.saludo();
   cout << "\n\n";
   p.mostrar();
}
