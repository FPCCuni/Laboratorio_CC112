#include <iostream>
using namespace std;

void ordBurbuja(int [], int);
void imprimir(int [], int);

int main(){

    int a[] = {4, 3, 0, 2, 1};
    int TAM = sizeof a/sizeof a[0];

    cout << " Arreglo original\n";

    imprimir (a,TAM);

    ordBurbuja(a,TAM);

    cout << "Arreglo ordenado\n";
    imprimir(a,TAM);

    return 0; 
}

void ordBurbuja (int arr[], int tam){
    for(int i =0; i < tam -1; ++i){ //numero de pasadas
        int interc = 0;
        for(int j = 0; j < tam -1 -i; ++j){ //numero de intercambios
            if(arr[j]> arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]  = temp;
                interc = 1;
            }
        }
        if (interc == 0)
            break;
    }
}

void imprimir(int lista[], int TAM){
    for (int i = 0; i < TAM; ++i){
        cout << lista[i] << "\t";
    }
    cout << "\n\n";
}

