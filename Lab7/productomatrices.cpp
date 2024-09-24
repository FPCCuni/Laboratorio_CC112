//Escribir una funcion que calcule el producto de 2 matrices
//utilizando asignación dinamica y devuelva la matriz producto

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int ** producto(int **M1, int **M2, int f1, int c1, int c2){
    int **P = new int*[f1]; //asignación de memoria dinámica para P
    for (int i = 0; i < f1; i++){
        P[i] = new int[c2];
        for(int j = 0; j < c2; j++){
            P[i][j] = 0;
            for(int k = 0; k < c1; k++){
                P[i][j] += M1[i][k] * M2[k][j];
            }
        }
    }

    return P;
}

void llenarMatriz(int **M, int f, int c){
    for (int i = 0; i < f; i++){
        for (int j = 0; j < c; j++){
            M[i][j] = rand() % 2;
        }
    }
}

void imprimirMatriz(int **M, int f, int c){
    for (int i = 0; i < f; i++){
        for (int j = 0; j < c; j++){
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
}

void liberarMemoria(int **M, int f){
    for (int i = 0; i < f; i++){
        delete[] M[i];
    }
    delete[] M;
}

int main() {
    int f1 = 3, c1 = 3, c2 =3;  //c1 = f2
    int ** M1 = new int*[f1];
    int ** M2 = new int*[c1];

    for(int i = 0; i < f1; i++){
        M1[i] = new int[c1];
    }

    for(int i = 0; i < c1; i++){
        M2[i] = new int[c2];
    }

    llenarMatriz(M1,f1,c1);
    llenarMatriz(M2, c1,c2);

    cout << "Matriz 1: " << endl;
    imprimirMatriz(M1,f1,c1);

    cout << endl;

    cout << "Matriz 2: " << endl;
    imprimirMatriz(M2,c1,c2);


   //invocar a la funcion producto
   int ** prod = producto(M1,M2,f1,c1,c2);
   
   cout << "Matriz producto: " << endl;
   imprimirMatriz(prod,f1,c2);


   //liberar la memoria
   liberarMemoria(M1,f1);

   liberarMemoria(M2,c1);

   liberarMemoria(prod,f1);
   
}
