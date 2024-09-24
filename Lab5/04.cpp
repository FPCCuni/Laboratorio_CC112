/*Los arreglos de punteros son útiles para declarar un arreglo de cadenas de caracteres. Si una
cadena de caracteres puede escribirse como char *c; un arreglo de cadenas de caracteres
podrá escribirse como char **c; o char *c[x]. Utilizando arreglo de punteros defina un
arreglo de cadenas de caracteres conteniendo los 7 días de la semana. Implementa una
función con el prototipo void imprimirCadenas(char **str); que imprima las 7 cadenas.*/
#include <iostream>
using namespace std;

void imprimirCadenas(const char **str){
    for(int i = 0; i < 7; ++i){
        cout << *(str + i) <<endl; 
    }

}

int main(){

    const char *semana[]={"Lunes", "Martes", "Miercoles", "Jueves","Viernes", "Sabado", "Domingo"};
    imprimirCadenas(semana);
    return 0; 
}