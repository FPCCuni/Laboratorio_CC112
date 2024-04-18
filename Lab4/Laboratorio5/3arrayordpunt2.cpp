//use apuntadores para generar un arr[n] con un número pequeño de
//datos enteros entre 1 y 12, ordenados ascendentemente y que los reporte. 
//forma 2;
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	int n;
	cout << "Ingrese el tamaño del arreglo: "; cin >> n;
	int a[n], *pfinal = a + n - 1, *pi, *pj, *pmin, aux;
	srand(time(0));
	 
	for (pi = a; pi <=pfinal; pi++){
		*pi = rand() % 12 + 1; 
		cout << *pi << " ";
	}
	cout <<"\n";	
	//Ordenamiento por selección con punter0s
	for(pi= a; pi < pfinal; pi++){
		pmin = pi;
		for(pj= pi+1; pj<=pfinal; pj++){
			if(*pmin>*pj){
				pmin = pj;
			}
		} 
		aux = *pmin;
		*pmin = *pi;
		*pi = aux;
	} 
	
	//imprimiendo arreglo ordenado
	for (pi = a; pi <= pfinal; pi++){
		cout << *pi << " ";
	}
		
	//ejerc 4 
	cout <<endl;
	for (pi = a; pi < pfinal; pi++){
		int temp = *pi;
		*pi = *pfinal;
		*pfinal = temp;
		pfinal--;  
	}
	//imprimiendo arreglo ordenado
	pfinal = a + n - 1;
	for (pi = a; pi <= pfinal; pi++){
		cout << *pi << " ";
	}	
	cout <<endl;
	cout <<"*a: " << *a<<endl; //primer elemento del último array
	cout <<"*pfinal: " << *pfinal <<endl; // último elemento del último array
	cout <<"a: " << a<<endl; //Direccion del primer elemento
	cout <<"pfinal: " << pfinal <<endl; // Dirección del último elemento
	cout <<"sizeof(int): " << sizeof(int) <<endl;
	
	return 0;
}

