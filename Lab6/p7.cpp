/*7. Crea una función que elimine un elemento específico de un arreglo 
dinámico de enteros*/
#include <iostream>
using namespace std;

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

void eliminarElemento(int *a, int &tam, int ind){

    for(int i = ind; i < tam; i++){ //desplazar a la izquieda
        a[i] = a[i+1];
    }
    tam--;
}

int main(){
    int N;
    int ind;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> N;

    cout << "Ingrese el indice del elemento a eliminar";
    cin >> ind;

    int *a = new int[N];


    llenar(a,N);
    imprimir(a,N);
    cout << "\n";

    eliminarElemento(a,N,ind);
    imprimir(a,N);

    //NO OLVIDAR LIBERAR MEMORIA DEL HEAP
    delete [] a;

    return 0; 
}