//función que reciba una referencia a un arreglo
// de enteros formado por valores diferentes de cero, 
//salvo el último término y retorne el mayor de los elementos
#include <iostream>
#include <clocale> //tildes
using namespace std;

int maximo(int * p);

int main(){
	setlocale(LC_ALL, "Spanish");
int edades[] = {29,19,17,23,18,0};
printf("edad máxima: %d\n",
maximo(edades));
}
int maximo(int * p){
	int max = *p;
	while(*p !=0){
		cout << *p<<endl;
		p++; // o while (*++p != 0)
		if(max < *p){
			max = *p;
			return max;
		}		
	}
	return max;

}
