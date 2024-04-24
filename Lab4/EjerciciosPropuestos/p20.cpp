#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void iniciarArreglo(int *p, int n)
{
    for (int i = 0; i < n; i++)
        *(p + i) = rand() % 5 + 1; // números del 1 al 5
}

void imprimir(int *p, int n, string mensaje = "Array")
{
    cout << mensaje << endl;
    for (int i = 0; i < n; i++)
        cout << *(p + i) << " ";
    cout << endl;
}

int sumarElementosElevadoAlCuadrado(int *p, int n)
{
    int suma = 0;
    for (int i = 0; i < n; i++)
        suma += p[i] * p[i];
    return suma;
}

int main()
{
    int n = 5;
    int *p = new int[n];

    iniciarArreglo(p, n);

    imprimir(p, n);

    cout << "suma de elementos al cuadrado: " << sumarElementosElevadoAlCuadrado(p, n) << endl;

    // liberación de la memoria
    delete[] p;

    return 0;
}