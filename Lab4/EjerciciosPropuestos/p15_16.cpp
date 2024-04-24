#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void iniciarMatriz(int *p, int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
            *(p + i * columnas + j) = rand() % 5 + 1; // números del 1 al 5
    }
}

int sumar(int *p, int filas, int columnas)
{
    int suma = 0;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
            suma += *(p + i * columnas + j);
    }
    return suma;
}

// parametro puntero que recibe una matriz
// https://baulderasec.wordpress.com/programando-2/programacion-c-por-la-practica/capitulo-viii/pasar-una-matriz-como-argumento-a-una-funcion/
void imprimir(int *p, int filas, int columnas, string mensaje = "Matriz")
{
    cout << mensaje << endl;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
            cout << *(p + i * columnas + j) << " ";
        cout << endl;
    }
}

int main()
{
    // generador de números aleatorios
    srand(time(NULL));

    int filas = 3;
    int columnas = 3;
    int matriz[filas][columnas];

    iniciarMatriz(&matriz[0][0], filas, columnas);

    imprimir(&matriz[0][0], filas, columnas);

    cout << "La suma de los elementos de la matriz es : " << sumar(&matriz[0][0], filas, columnas) << endl;

    return 0;
}