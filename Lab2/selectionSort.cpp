#include <iostream>
using namespace std;

void ordSeleccion(int [], int);
void imprimir(int [], int);

int main(){

    int a[] = {12, 45, 8, 5, 16};
    int TAM = sizeof a /sizeof a[0];


    
    cout << "Arreglo original\n";
    imprimir(a,TAM);
    ordSeleccion(a,TAM);

    cout << "Arreglo ordenado\n";
    imprimir(a,TAM);

    return 0; 
}

void ordSeleccion(int lista[], int TAM){
    int ind_min, i, j;
    for(int i = 0; i <TAM - 1; ++i){ //pasadas
        ind_min = i;
        for(j = i+1; j < TAM; ++j){//ubicamos el elemento min
            if (lista[j] < lista[ind_min])
                ind_min = j;
        }

        if (ind_min != i){ //intercabio elem min con el i-esimo
            int temp = lista[ind_min]; //swap(lista[ind_min], lista[i]);
            lista[ind_min] = lista[i];
            lista[i] = temp;
            }
        } 
}


void imprimir(int lista[], int TAM){
    for(int i = 0; i < TAM; ++i){
        cout << lista[i] << "\t";
    }
    cout << "\n\n";
}