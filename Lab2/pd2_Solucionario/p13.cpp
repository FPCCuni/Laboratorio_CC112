#include<iostream>

using namespace std;

void iniciarNotas(int v[], int longitud){
    /*
    int v_[] = {1, 4, 9, 19, 8, 10, 10, 9, 15, 10, 2, 19, 20, 4, 20, 7, 3, 15, 16, 16};
    for(int i=0; i<longitud; i++)
        v[i] = v_[i];
    */
    
    for(int i=0; i<longitud; i++)
        v[i] = rand()%30 + 1; // números entre 1 y 30
    
}

void imprimir(int v[], int longitud){
    for(int i=0; i<longitud; i++){
        cout << v[i] << " ";
    }
    cout <<endl;
}

// descendente
void ordenamiento_de_burbuja_indices_pares(int v[], int longitud){
    for(int i=0; i<longitud-1; i+=2){
        for(int j=0; j<longitud-2; j+=2){
            if(v[j] < v[j+2]){
                int temp = v[j];
                v[j] = v[j+2];
                v[j+2] = temp;
            }
        }
    }
}

// ascendente
void ordenamiento_de_burbuja_indices_impares(int v[], int longitud){
    for(int i=0; i<longitud-1; i+=2){
        for(int j=1; j<longitud-2; j+=2){
            if(v[j] > v[j+2]){
                int temp = v[j];
                v[j] = v[j+2];
                v[j+2] = temp;
            }
        }
    }
}

int main(){
    int longitud = 20;
    int v[longitud];
    
    iniciarNotas(v, longitud);
    imprimir(v, longitud);
    ordenamiento_de_burbuja_indices_pares(v, longitud);
    ordenamiento_de_burbuja_indices_impares(v, longitud);
    imprimir(v, longitud);

    return 0;
}