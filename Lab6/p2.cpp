/*2. Crea una función que reciba un entero como parámetro y devuelva un 
puntero a un arreglo dinámico de ese tamaño, lleno de números aleatorios.*/

#include <iostream>
#include <cstdlib> //srand(),  rand()
#include <ctime> //time()
using namespace std;

int * arregloAleatorio(int tam){
    int * a = new int[tam];

    srand(time(0));

    for(int i = 0; i < tam; ++i){
        a[i] = rand()% 99 +1; //aleatorios entre 1 y 99
    }

    return a;
}

int main(){
    int N;
    cout << "Ingrese el tamaño";
    cin >> N;

    //Asignación dinámica

    int * arr = arregloAleatorio(N);

    // funcion que muestre los numeros primos en el arreglo aleatorio

    //liberar memoria 
    return 0; 
}