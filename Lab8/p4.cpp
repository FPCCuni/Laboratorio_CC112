/*
Escriba un programa C++ para almacenar registros de estudiantes como Estructuras
y ordenarlos por nombre Sugerencia: usar la función qsort de la libreria stdlib
*/
#include <cstdlib> //qsort()
#include <cstring> //srtcmp()
#include <iostream>
using namespace std;

struct Estudiante {
  int codigo;
  char nombre[30];
  int edad;
};

int comparar(const void *p1, const void *p2) {
  return strcmp(((Estudiante *)p1)->nombre, ((Estudiante *)p2)->nombre);
}

int main() {
  Estudiante estudiantes[] = {1, "Maria", 13, 2, "Juan", 17, 3, "Ross", 18};

  int n = sizeof(estudiantes) / sizeof(Estudiante);

  cout << "\nRegistro original: " << endl;
  for (int i = 0; i < n; ++i) {
    cout << "Codigo: " << estudiantes[i].codigo
         << " Nombre: " << estudiantes[i].nombre
         << " Edad: " << estudiantes[i].edad << endl;
  }

  // ordenando el registro
  qsort(estudiantes, n, sizeof(Estudiante), comparar);

  cout << "\nRegistro ordenado por el campo nombres " << endl;
  for (int i = 0; i < n; ++i) {
    cout << "Codigo: " << estudiantes[i].codigo
         << " Nombre: " << estudiantes[i].nombre
         << " Edad: " << estudiantes[i].edad << endl;
  }
}
