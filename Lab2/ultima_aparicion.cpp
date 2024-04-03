/*Dado un arreglo de tamaño N que consta de números enteros y
 un elemento M del mismo. Escribir un programa que busque e imprima
  el índice de la última aparición del elemento M en el arreglo, 
si existe; de lo contrario, imprima -1.
 Considere además que la indexación en el arreglo comienza en 1*/

#include <iostream>
using namespace std;

int ultimaAparicion(int a[], int tam, int clave){
    for(int i = tam; i>=1; --i){
        if(a[i] == clave){
            return i;
        }
    }
    return -1;
}

int main(){
    int N, M;
    //cout << "Ingrese el tamaño";
    cin >> N;
    //cout << "Ingrese la clave";
    cin >> M;

    int a[N+1];

    for(int i = 1; i <= N; ++i){
        cin >> a[i];
    }

    cout << ultimaAparicion(a,N,M);

    return 0; 
}