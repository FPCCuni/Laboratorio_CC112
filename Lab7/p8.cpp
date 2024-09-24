#include <iostream>
using namespace std;

struct Persona{
   string nombre;
   int edad;
};

int main() {
   int N = 3;

   Persona *p = new Persona[N];
   for(int i=0; i<N; i++){
      cout << "Ingrese el nombre " << i+1 << ": ";
      cin >> p[i].nombre;
      cout << "Ingrese la edad " << i+1 <<": ";
      cin >> p[i].edad;
   }

   cout << "\n\n";

   for(int i=0; i<N; i++){
      cout << "Nombre " << i+1 << ": " << p[i].nombre << endl;
      cout << "Edad " << i+1 << ": " << p[i].edad << endl;
   }

   delete [] p;
   
 
}
