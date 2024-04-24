#include <iostream>

using namespace std;

int sumar(int *p, int n)
{
    int suma = 0;
    for (int i = 0; i < n; i++)
        suma += *(p + i); // tambien se puede declarar p[i]
    return suma;
}

void imprimir(int *p, int n)
{
    for (int i = 0; i < n; i++)
        cout << *(p + i) << " ";
    cout << endl;
}

int main()
{
    int array[] = {1, 6, -3, 4, 5};
    int n = sizeof(array) / sizeof(array[0]);

    imprimir(array, n); // es lo mismo que:  imprimir(&array[0], n)

    cout << "suma de los elementos: " << sumar(array, n) << endl;

    return 0;
}