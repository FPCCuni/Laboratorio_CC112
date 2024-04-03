#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
    // Generación de números pseudoaleatorios
    srand(time(NULL));

    // puntuaciones del 2 al 12
    int puntuaciones[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int lanzamientos = 20000;

    for(int i=0; i<lanzamientos; i++){
        int puntacion1 = rand()%6 + 1; // puntuación entre 1 al 6
        int puntacion2 = rand()%6 + 1;

        int puntuacion = puntacion1 + puntacion2;
        puntuaciones[puntuacion - 2] += 1; 
    }

    for(int i=2; i<=12; i++){
        cout << i << " salio: " << puntuaciones[i - 2] << endl;
    }


    return 0;
}