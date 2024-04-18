//Suma de elementos con punteros
#include <iostream>
using namespace std;

int main(){
	int a[] = {1,2,3,4,5,6};
	int n = sizeof(a)/sizeof(int);
	int suma =0;
	int *ptr = a; // En 2 pasos: declaro declaro el puntero: int *ptr;
	              // inicializo: ptr = a;
	for (int i = 0; i <n; i++){
		suma += *ptr;  //equivale a suma = suma + *ptr;
		ptr++; //actulizando la direccion donde apunta, debo reinicializar
	}
	cout << "La suma es: " << suma ;

	return 0;
}

