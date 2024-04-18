//use apuntadores para generar un arr[n] con un número pequeño de
//datos enteros entre 1 y 12, ordenados ascendentemente y que los reporte.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void insertionSort(int *, int);
void print(int *, int);
int main(){
	int n;
	cout << "Ingrese el tamaño del arreglo: "; cin >> n;
	
	int a[n], *ptr = a;

	srand(time(0));
	 
	for (int i = 0; i < n; i++){
		*ptr = rand() % 12 + 1; //o *(ptr + i)
		cout << *ptr << " ";
		ptr++; //aritmetica de punteros, debe reinicializar
	}
	cout <<"\n";
	ptr = a;
	
	//Ordenando 
	insertionSort(ptr, n);
	
	print(ptr,n);
	

	return 0;
}

void insertionSort(int *p, int tam){
	for (int i = 1; i < tam; i++){
		int temp = *(p + i);// o p[i] iniciamos guardando la regunda carta
		int j = i - 1; // posición anterior
		while((*(p +j)> temp) &&(j >=0)){ //o p[j]
			*(p+j+1) = *(p + j); // o p[j+1] = p[j];
			j--;
		}
		*(p +j+1) = temp; // o p[j+1];
	}
	
}

void print(int *p, int tam){
	for (int i=0; i < tam; i++){
		cout << p[i] << "\t "; // <> *(p+i)
	}
}


