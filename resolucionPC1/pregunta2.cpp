#include <iostream>
#include <iomanip> //setw() para configurar espaciado
using namespace std;
void ordena(int CLAVE[], int A[], int B[], int n)
{
	//ordena en forma ascendente
	for(int i=0;i<n;i++)
		for(int j=0;j<n-1;j++)
			if (CLAVE[j]>CLAVE[j+1]){			
				swap(CLAVE[j],CLAVE[j+1]);
				swap(A[j],A[j+1]);
				swap(B[j],B[j+1]);
			}
}
const int precio_maximo=100;
const int peso_maximo=50;
const int n=6;
int main(){
int CODIGO[n] = { 12, 11, 16, 18, 20,  7 } ;
int PRECIO[n] = { 55, 20, 25, 45, 15, 30 };
int PESO[n]   = { 20, 10, 30, 40, 10, 15 };
int precio_total =0 ; //precio total
int peso_total =0 ; //peso total
ordena(PRECIO,CODIGO,PESO,n);
cout<<"Listado de productos en la compra\n";
cout<<"Codigo Precio (S/) Peso (kg)\n";
for(int i=0;i<n;i++){
    int nuevo_precio_total = precio_total+PRECIO[i];
    int nuevo_peso_total = peso_total+PESO[i];
    if ((nuevo_precio_total<=precio_maximo)&&
        (nuevo_peso_total<=peso_maximo)) {
         precio_total=nuevo_precio_total;
         peso_total=nuevo_peso_total;
        cout<<setw(6)<<CODIGO[i]<<setw(12)<<PRECIO[i]<<setw(10)<<PESO[i]<<endl;
    }
    else{
        break;
    }
}
cout<<"Monto no gastado: "<<precio_maximo-precio_total<<" soles.";    
}