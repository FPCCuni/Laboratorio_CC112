/*. Escribe un programa para imprimir la dirección
del puntero a una variable
cuyo valor ingresa el usuario*/
#include <iostream>
using namespace std;

int main(){
    int n =8;
    int *p = &n;

    cout <<"Dirección de del puntero p: " << &p <<endl;


    return 0; 
}