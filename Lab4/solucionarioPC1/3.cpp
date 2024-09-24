// 3.cpp

#include <iostream>
using namespace std;


void imprimir(int vector[], int n)
{
	for (int i = 0; i < n; i++)
		cout << vector[i] << " ";
	cout << endl;
}

int busquedaLineal(int vector[], int n, int clave)
{
  for (int i = 0; i< n ; i++)
    if (vector[i] >= clave)
      return i;
  return -1;
}

int esBisiesto(int a)
{
    return a % 4 == 0 && (a % 100 != 0 || a % 400 == 0);
}

int main()
{
   int aInicial,contInicial;
   int aFinal,contFinal;
   int longitud = 0;
   int anio=0;
   int valor = 0;
   cout<<"Ingrese anio inicial: ";
   cin>> aInicial;
   cout<<"Ingrese anio final: ";
   cin>> aFinal;
   contInicial = aInicial;
   contFinal = aFinal;
   
   //Aquí vendría la entrada de datos tal como haces en tu código, eso te lo dejo a ti.

   while (contInicial <= contFinal)
   {
      if (esBisiesto(contInicial))
      {
         longitud++;
      }

      contInicial++;
   }
   int Lista[longitud]{0};
   contInicial = aInicial;
   contFinal = aFinal;
   longitud = 0;
   while (contInicial <= contFinal)
   {
      if (esBisiesto(contInicial))
      {
         Lista[longitud]=contInicial;
         longitud++;
      }

      contInicial++;
   }
   cout<< "la lista de biciestos entre "<< aInicial<<" y "<<aFinal<<" es"<<endl;
   imprimir(Lista,longitud);
   cout<<"Ingrese un año a buscar: ";
   cin>>anio;
   valor = busquedaLineal(Lista,longitud,anio);
   if(valor!=-1){
   		cout<<"el anio biciesto inmediato inferior es: "<<Lista[valor-1]<<endl;
   }
   else{
   	    cout <<"anio fuera del rango";
   }
   
}
