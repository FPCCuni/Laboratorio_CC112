#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void iniciarArreglo(int *p, int n)
{
    for (int i = 0; i < n; i++)
        *(p + i) = rand() % 100 + 1; // números del 1 al 100
}

void imprimir(int *p, int n, string mensaje = "Array")
{
    cout << mensaje << endl;
    for (int i = 0; i < n; i++)
        cout << *(p + i) << " ";
    cout << endl;
}

bool esPrimo(int numero)
{
    for (int i = 2; i < numero; i++)
        if (numero % i == 0)
            return false;
    return true;
}

void mostarPrimos(int *p, int n)
{
    for (int i = 0; i < n; i++)
        if (esPrimo(p[i]))
            cout << "El numero " << p[i] << " es un numero primo" << endl;
}

int main()
{
    int n = 30;
    int *p = new int[n];

    iniciarArreglo(p, n);

    imprimir(p, n);

    mostarPrimos(p, n);

    // liberación de la memoria
    delete[] p;

    return 0;
}