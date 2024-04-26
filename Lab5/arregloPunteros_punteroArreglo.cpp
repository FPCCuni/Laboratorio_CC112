#include <iostream>
using namespace std;

int main(){
    //Arreglo de punteros
    int a = 1, b = 2, c = 4;
    int arr[] = {1,3,4};

    int *ap[3];
    ap[0] = &a;
    ap[1] = &b;
    ap[2] = &c;
    //imprimir los valores al que apunta ap


    // Puntero a un arreglo

    int (*pa)[3] = arr;
     

    return 0; 
}