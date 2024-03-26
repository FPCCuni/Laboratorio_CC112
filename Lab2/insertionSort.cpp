#include <iostream>
using namespace std;


void ordInsercion(int [], int);
void imprimir(int [], int);


int main(){
    int a[] = {12, 3, 5, 10, 8, 1};
    int TAM = sizeof a /sizeof a[0];


    
    cout << "Arreglo original\n";
    imprimir(a,TAM);
    ordInsercion(a,TAM);

    cout << "Arreglo ordenado\n";
    imprimir(a,TAM);


    return 0; 
}

void ordInsercion(int arr[], int TAM){
    for(int i = 1; i < TAM; ++i){
        int temp = arr[i]; //almaceno el valor de la i-esima carta (a partir de la segunda)
        int j =  i-1; //carta enterior

        while(j >= 0 && arr[j] > temp){//desplazando
            arr[j+1] = arr[j];
            --j;
        }
        arr[j+1] = temp; 
    }
}

void imprimir(int arr[], int TAM){
    for(int i = 0; i < TAM; ++i){
        cout << arr[i] << "\t";
    }
    cout << "\n\n";
}