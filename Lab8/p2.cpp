/*
Implementar en lenguaje C++ un programa que maneje un arreglo de estructuras para almacenar las fechas
de cumpleaños de 20 amigos. Los datos a almacenar sobre cada amigo son: nombre, día, mes y año. El
programa debe indicarnos cuántos de nuestros amigos cumplen los años un día y mes determinados
introducidos porteclado.
*/
#include <iostream>
using namespace std;

const int  N = 3;
struct Fecha{
   int dia;
   int mes;
   int anio;
};

struct Amigo{
   char nombre[30];
   Fecha cumple;
};

void inicializar(Amigo agenda[], int N){
   for(int i = 0; i < N; ++i){
      cout << "Ingrese el nombre del amigo " << i+1 <<endl;
      cin.getline(agenda[i].nombre, 30);
      cout << "Ingrese el dia de cumpleaños del amigo " << i+1<<endl;
      cin >> agenda[i].cumple.dia;
      cout << "Ingrese el mes de cumpleaños del amigo " << i+1<<endl;
      cin >> agenda[i].cumple.mes;
      cin.ignore();
   }
}
void mostrar(Amigo agenda[], int N){
   cout << "Agenda de amigos" << endl;
   for(int i = 0; i < N; ++i){
      cout << "Nombre: " << agenda[i].nombre << endl;
      cout << "Fecha de cumpleaños: " << agenda[i].cumple.dia << "/" << agenda[i].cumple.mes << endl;
   }
}
Fecha leerFecha(){
   Fecha f;
   cout << "Ingrese el dia de cumpleaños" << endl;
   cin >> f.dia;
   cout << "Ingrese el mes de cumpleaños" << endl;
   cin >> f.mes;

   return f;
}
int buscar(Amigo agenda[], int N, Fecha f){
   int cont = 0;
   for(int i = 0; i < N; ++i){
      if(agenda[i].cumple.dia == f.dia && agenda[i].cumple.mes == f.mes){
         cont++;
      }
   }
   return cont;
}

int main() {
   Amigo amigos[N];
   Fecha f;
   inicializar(amigos, N);
   mostrar(amigos, N);
   f = leerFecha();
   int cont = buscar(amigos, N, f);
   cout << "Cantidad de amigos que cumplen años en esa fecha: " << cont <<endl;
   
   
}
