/*Implementar una calculadora con las 4 operaciones básicas
 (+, -, *, /). Utilice un arreglo
de punteros a funciones*/



#include <iostream>
using namespace std;

int suma(int a, int b){
    return a+b;
}

int resta(int a, int b){
    return a-b;
}

int producto(int a, int b){
    return a*b;
}

int division(int a, int b){
    return a/b;
}

int main(){
    int (*operaciones[4])(int, int) ={suma ,resta, producto, division};


    return 0; 
}