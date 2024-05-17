/*Escribe un programa que permita al usuario ingresar una matriz dinámica 
de enteros de tamaño MxN y luego imprima la transpuesta de esa matriz*/
#include <iostream>
using namespace std;

void llenar(int *arr, int filas, int cols){
    srand(time(0));
    for(int i = 0; i < filas ; i++){
        for(int j = 0; j < cols; j++){
            *(arr + i*cols +j) = rand()% 10;
        }
    }
}

void imprimir(int * arr, int filas, int cols){
    for(int i = 0; i < filas ; i++){
        for(int j = 0; j < cols; j++){
            cout << *(arr + i*cols +j) <<" ";
        }
        cout << "\n";
        
    }
}


int main(){
    int filas, cols;
    cout << "Ingrese el numero de filas y cols resp.: ";
    cin >> filas >> cols;

    int *matriz = new int[filas*cols];

    /* ASIGNACION DINAMICA USANDO PUNTERO A PUNTERO
    int **matriz1 = new int*[filas];
    for(int i = 0; i < filas; i++){
        matriz1[i] = new int[cols];
    }
    */

    llenar(matriz,filas,cols);

    cout << "Matriz original"<<endl;
    imprimir(matriz,filas,cols);

    cout << "Matriz transpuesta" <<endl;
    imprimir(matriz, cols,filas);


    delete [] matriz;

    /*LIBERAR MEMORIA CASO PUNTERO A PUNTERO
    */
    return 0; 
}