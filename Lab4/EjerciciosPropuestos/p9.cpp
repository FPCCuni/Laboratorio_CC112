#include <iostream>

using namespace std;

void intercambiar(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void invertir(int *p, int n)
{

    int mitad = n / 2;
    for (int i = 0; i < mitad; i++)
        intercambiar(&p[i], &p[n - i - 1]);
}

void imprimir(int *p, int n, string mensaje = "Array")
{
    cout << mensaje << endl;
    for (int i = 0; i < n; i++)
        cout << *(p + i) << " ";
    cout << endl;
}

int main()
{
    int array[] = {1, 6, -3, 10, 5, 4};
    int n = sizeof(array) / sizeof(array[0]);

    imprimir(array, n, "Array original");

    invertir(array, n);

    imprimir(array, n, "Array invertido");

    return 0;
}