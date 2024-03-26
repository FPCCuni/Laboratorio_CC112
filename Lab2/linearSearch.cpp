#include <iostream>
using namespace std;


int busqLineal(int [], int, int);
void imprimir(int [], int);


int main(){
    int clave = 0;
    int res = 0;

    int a[] = {25,17,13,16,41,32,12,115,95,84,54,63,78,21,10};
    int TAM = sizeof a /sizeof a[0];

    cout << "Arreglo original\n";
    imprimir(a,TAM);

    cout << "Ingrese un valor a buscar\n ";
    cin >> clave;
    
    res = busqLineal(a,TAM,clave);

    if (res==-1){
        cout << "El valor buscado no se encuentra en el arreglo\n";
    }else{
        cout<< "Su valor se encuentra en a["<<res<<"]\n";
    }
    
    


    return 0; 
}

int busqLineal(int arr[], int TAM, int clave){
    for(int i = 0; i < TAM; ++i){
        if(arr[i]==clave)
            return i; 
    }
    return -1;
}

void imprimir(int arr[], int TAM){
    for(int i = 0; i < TAM; ++i){
        cout << arr[i] << "\t";
    }
    cout << "\n\n";
}