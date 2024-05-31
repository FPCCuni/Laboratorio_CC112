#include <iostream>
#include <iomanip> //PARA USAR MANIPULADORES DE FLUJO, setw() left     setiosflags(ios::fixed) setprecision() 
using namespace std;

struct Alumno{
   int codigo;
   char nombre[30];
   int notas[4];
};

int main() {
   Alumno alumno[] = {1, "Juan", 13, 14, 15, 16,
                    2, "Maria", 17, 12, 13 ,18,
                    3, "Ross", 18, 17, 12, 15};
   
   int n = sizeof(alumno)/sizeof(Alumno);
   float prom, pmax = 0, pmin = 20;
   int suma, imin, imax;

   cout << left<<setw(10) << "Codigo" << setw(10)<< "Nombre"<< setw(12)<< "Notas" << setw(8) <<  "promedio" <<endl;
   for(int i = 0 ; i < n; ++i ){
      suma = 0;
      for(int j = 0; j < 4; ++j){
         suma += alumno[i].notas[j];
      }
      prom = suma/4.0;

      if(prom > pmax){
         pmax = prom;
         imax = i;
      }

      if(prom < pmin){
         pmin = prom;
         imin = i;
      }

      cout << left<<setw(10) <<alumno[i].codigo << setw(10)<< alumno[i].nombre<< setw(3)<<
              alumno[i].notas[0] << setw(3) << alumno[i].notas[1] <<setw(3) << 
              alumno[i].notas[2] << setw(3) << alumno[i].notas[3] <<setiosflags(ios::fixed)  << setprecision(2) << prom << endl;  
   }

   cout << "\nEstudiantes con los promedios minimo y maximo" << endl;
   cout <<setw(10) <<alumno[imin].codigo << setw(10) << alumno[imin].nombre << setw(3)<< alumno[imin].notas[0] << setw(3) <<
          alumno[imin].notas[1] << setw(3) << alumno[imin].notas[2] << setw(3) << alumno[imin].notas[3] << " " << pmin << endl;  

   cout <<setw(10) <<alumno[imax].codigo << setw(10) << alumno[imax].nombre << setw(3)<< alumno[imax].notas[0] << setw(3) << 
          alumno[imax].notas[1] << setw(3) << alumno[imax].notas[2] << setw(3) << alumno[imax].notas[3] << " " << pmax << endl;
   
}
