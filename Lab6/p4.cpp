/*4. Crea una función que reciba dos arreglos dinámicos y su tamaño, y 
devuelva un nuevo arreglo dinámico que sea la concatenación de ambos*/
#include <iostream>
using namespace std;

int * concatArreglos(int * a1, int *a2, int n1, int n2){
    int *a =  new int[n1+n2];
    for(int i = 0; i <n1; i++){
        a[i] = a1[i];
    }
    for(int i = 0; i <n2; i++){
        a[n1 + i] = a2[i];
    }
    return a;
}

void llenar(int *arr, int tam){
    srand(time(0));
    for(int i = 0; i < tam ; i++){
        arr[i] = rand()% 10;
    }
}

void imprimir(int * arr, int tam){
    for(int i = 0; i < tam ; i++){
        cout << arr[i] <<" ";
    }
}

int main(){
    int n1 = 4;
    int n2 = 5;

    int *a1 = new int[n1];
    int *a2 = new int[n2];

    llenar(a1,n1);
    llenar(a2,n2);


    imprimir(a1, n1);
    cout << "\n";

    imprimir(a2,n2);
    cout << "\n";

    int *arrConcat = concatArreglos(a1,a2,n1,n2);

    imprimir(arrConcat, n1+n2);

    // NO OLVIDAR LIBERAR MEMORIA
    delete [] a1;

    delete [] a2;

    delete [] arrConcat;


    return 0; 
}