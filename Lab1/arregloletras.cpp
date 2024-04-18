/*Escribe un programa que muestre cómo construir una matriz con las letras del alfabeto,
imprimir el resultado y luego convertir esa matriz a mayúsculas e imprimir nuevamente.*/

#include <iostream>
using namespace std;

int main(){

    char letras[27];

    char primero = 'a';

    for(int i = 0; i <26; ++i){
        letras[i] = primero + i; // 'a' + 1 == 98  ARITMETICA DE CARAcTERES
    }

    for(int i = 0; i <26; ++i){
        cout << letras[i] << " ";
    }

    for(int i = 0; i <26; ++i){
        letras[i] = primero + i - ('a' - 'A'); //  ARITMETICA DE CARAcTERES
    }   // toupper();

    cout <<endl;
    for(int i = 0; i <26; ++i){
        cout << letras[i] << " ";
    }



  return 0; 
}