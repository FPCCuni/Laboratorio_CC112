# Temas
* Recursividad 

* Algoritmos de ordenamiento

* Algoritmos de búsqueda

## Pregunta 1
### Implementación iterativa
* Idea: Recorrer la cadena. Utilizar una variable contador que incremente su calor en 1 cuando encuentre '(' y disminuya su valor en 1 cuando encuentre ')'. Si cont es negativo entonces no están balanceados. Si cont es cero entonces están balanceados

* Complete la mplementación

```C++
bool balance(char c[], int inic) {
//defina su variable contador

/* recorra el arreglo de caracteres e incremente el contador en 1 si
c[i] == '(' en caso contrario si c[i] == ') disminuya el contador. */

// analice los casos cuando el contador es negativo y cuando es positivo o cero retornando valores adecuados. 
}
```

### Paso intermedio 
* Consiste en escribir una solución
  que está entre la implementación
  iterativa y recursiva

* Complete la implementación
```C++
bool blanceoDelegado(char c[], int i, int cont) {
//identifique el caso base


//llame a la función iterativa.

}
```


### Implementación recursiva
* Tome la implementación intermedia y complete la implementación recursiva

```C++
bool blanceoRec(char c[], int i, int cont) {
//identifique el caso base


//llame a la función balanceoRec, pasando una versión más pequeña del problema.

}
```

## Pregunta 2
* Idea Utilizar algún algoritmo de ordenamiento. Ordenar de acuerdo a la clave PRECIO

*complete la implementación

```C++
#include <iostream>
#include <iomanip> //setw() para configurar espaciado
using namespace std;
void ordena(int CLAVE[], int A[], int B[], int n){
	//ordena en forma ascendente
}	
//declare constantes globales para:
const int precio_maximo=100;
const int peso_maximo=50;
const int n=6; //tamaño del arreglo
int main(){
int CODIGO[n];
int PRECIO[n];
int PESO[n];
int precio_total =0 ; 
int peso_total =0 ;

//complete aqí su implementación

}
```


## Pregunta 3
* Idea, estaba en el exámen "implementación de complejidad O(n)". 

```C++
#include <iostream>
#include <climits> // para acotar variables tipo int 
using namespace std;

// implemente aquí su función que tendrá complejidad O(n), es decir, el algoritmo de ....
double promMenoresElem(int A[], int n) {

    //Complete su implementación

}

int main() {
    
    int A[];
    //complete su implementación

    return 0;
}
```


## Pregunta 4
* Las ideas están descritas en el problema
```C++
#include <iostream>
using namespace std;

//implemente el algoritmo de búsqueda binaria aquí.


//Escriba su programa para generar  n primos

int main(){
	// escriba su código aquí
	
}
```

## Ejercicio 
Complete usted mismo su implmentación e intente reescribir su código utilizando punteros.