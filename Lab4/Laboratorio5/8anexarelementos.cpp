#include <iostream>
using namespace std;

void anexar(int * des, int * ori);

void mostrar(int * p);

int longitud(int * p);

int main(){
	int destino[6] = {4,5,0};
	
	int origen[4] = {-1,-3,-2,0}; 
	
	cout << " la longitud es" <<longitud(destino)<<endl;
	mostrar(destino);
	cout <<"destino despues de mostrar: " << *destino<<endl;
	anexar(destino, origen);
	cout <<"destino despues de anexar: " << *destino<<endl;
	cout <<"origen  despues de anexar: " << *origen<<endl;
	mostrar(destino);
	cout <<"destino despues de volver a mostrar: " << *destino<<endl;
		
}
int longitud(int *p){
	int i = 0; //cuenta cada elemento != 0
	while(*p != 0){
		i++;
		p++; //aritmérica de puntero
	}
	return i;			
}
void mostrar(int *p){
	while(*p != 0){
		cout << *p << " ";
		p++;	
	}
	cout <<endl;			
}
void anexar(int *des, int *ori) {
	des = des + longitud(des); //aritmética de punteros
	while(*ori != 0) *des++ = *ori++;
}
