/*1. Solicita al usuario un entero y crea un arreglo dinámico de ese tamaño. 
Luego, llena el arreglo con números ingresados por el usuario.*/

#include <iostream>
using namespace std;

void llenarArreglo(int *p, int tam){
    for(int i = 0; i <tam; ++i){
        cout << "Ingrese el elemto " << i+1 << ": ";
        cin >> p[i];
    }
}


int main(){
    int N;
    cout << "Ingrese el tamaño";
    cin >> N;

    //Asignación dinámica

    int * arr = new int[N];

    llenarArreglo(arr, N);

    //implemente su función para calcular el promedio

    //Cuidado! EL OPERADOR DE DIVISIÓN / DEVUELVE EL COCIENTE ENTERO SI SUS OPERANDOS SON ENTEROS


    delete [] arr;

    return 0; 
}