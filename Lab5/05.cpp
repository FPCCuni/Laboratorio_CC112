/*Escribir una función que permita calcular el cubo de 
un número dado. Utilice el concepto
de puntero a función*/
#include <iostream>
using namespace std;

int cubo(int x){
    return x*x*x;
}

int main(){
    //puntero a función

    int (*f)(int);

    f = cubo;

    int n = 5;

    int resultado = f(n);
    cout << resultado;

    return 0; 
}