/*
Realizar la estructura punto con los siguientes atributos, etiqueta del punto, coordenada x,
coordenada y donde se ingrese 3 coordenadas:
Se pide utilizar funciones, el operador new y estructuras:
Ingresar los 3 puntos.
Listar los puntos.
Validar si es isósceles.
Ejemplo
Listar Datos Etiqueta: A x: 2 y: 1
Etiqueta: B x: 4 y: 1
Etiqueta: C x: 3 y: 3
El triángulo es Isósceles.
*/
#include <iostream>
#include <cmath> // para funciones sqrt() y pow()
#include <cstring>
using namespace std;

const int N = 3;

struct Punto{
   string etiqueta; //o char etiqueta;
   int x;
   int y;
};

void ingresarPuntos(Punto p[N]){
   Punto punto[N];
   for(int i = 0; i < N; i++){
      cout << "Ingrese la etiqueta " << i+1 << ": ";
      
      getline(cin,p[i].etiqueta); // >> p[i].etiqueta;
      cout << "Ingrese la coordenada x: ";
      cin >> p[i].x;
      cout << "Ingrese la coordenada y: ";
      cin >> p[i].y;
      cin.ignore(); //LIMPIAR EL BUFFER adecuadamente
   }

   /* OTRA FORMA DE INICIALIZAR
   Punto punto[N] = {'A', 2,1,
                     'B', 4,1,
                     'C', 3,3};

   int  i = 0;
   while(i < N){
      p[i].etiqueta = punto[i].etiqueta;
      p[i].x = punto[i].x;
      p[i].y = punto[i].y;
      i++;
   }
*/
   
}
void mostrarPuntos(Punto p[N]){
   for(int i = 0; i <N; ++i){
      cout << "Etiqueta: " << p[i].etiqueta << " x: " << p[i].x <<
         " y: " << p[i].y << endl;
   }
}
bool esIsosceles(Punto p[N]){
   bool esIsosceles = false;
   int distanciaAB = sqrt(pow(p[0].x - p[1].x, 2) + pow(p[0].y - p[1].y, 2));
   int distanciaBC = sqrt(pow(p[1].x - p[2].x, 2) + pow(p[1].y - p[2].y, 2));
   int distanciaCA = sqrt(pow(p[2].x - p[0].x, 2) + pow(p[2].y - p[0].y, 2));
   if(distanciaAB == distanciaBC || distanciaBC == distanciaCA || distanciaCA == distanciaAB){
      esIsosceles = true;
   }else{
      esIsosceles = false;
   }
   return esIsosceles;
}

int main() {
   Punto *ptr;
   ptr = new Punto[N]; // ASIGNAR MEMORIA DINAMICA
   ingresarPuntos(ptr);
   mostrarPuntos(ptr);
   if(esIsosceles(ptr)){
      cout << "El triángulo es Isósceles." << endl;
   }else{
      cout << "El triángulo no es Isósceles." << endl;
   }
   delete [] ptr; //LIBERAR MEMORIA DINAMICA
}
