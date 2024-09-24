#include <iostream>
using namespace std;

// Asignacion dinamica para una matriz
int main(){
    int f = 3;
    int c = 4;

    int *matriz = new int[f*c];

    for(int i = 0; i < f; ++i){
        for(int j = 0; j < c; ++j){
            *(matriz + i*c + j)  = rand()%10;
        }
    }

    //liberamos
    delete [] matriz;


   
}