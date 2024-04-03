#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

void iniciarArray(int v[], int longitud){
    /*
    int v_[] = {15, 12, 29, 20, 11, 25};
    for(int i=0; i<longitud; i++)
        v[i] = v_[i];
    */

    
    for(int i=0; i<longitud; i++)
        v[i] = rand()%30 + 1; // números entre 1 y 30
    
}

void imprimir(float v[], int longitud){
    for(int i=0; i<longitud; i++){
        cout << v[i] << " ";
    }
    cout <<endl;
}

void imprimir(int v[], int longitud){
    for(int i=0; i<longitud; i++){
        cout << v[i] << " ";
    }
    cout <<endl;
}

int minimo(int arr[], int n){
    int min = arr[0];
    for(int i=1; i<n; i++)
        if(arr[i] < min) min = arr[i];
    return min;
}

int maximo(int arr[], int n){
    int max = arr[0];
    for(int i=1; i<n; i++)
        if(arr[i] > max) max = arr[i];
    return max;
}

void escala(int n, int arr[], float farr[]){
    int min = minimo(arr, n);
    int max = maximo(arr, n);

    for(int i=0; i<n; i++){
        farr[i] = (float) (arr[i] - min) / (max - min);
    }
}

int main(){
    // Generación de números pseudoaleatorios
    srand(time(NULL));

    int longitud = 6;
    int arr[longitud];
    float farr[longitud];

    iniciarArray(arr, longitud);
    imprimir(arr, longitud);
    escala(longitud, arr, farr);
    imprimir(farr, longitud);
    return 0;
}