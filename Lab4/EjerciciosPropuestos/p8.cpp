#include <iostream>

using namespace std;

int maximo(int *p, int n)
{
    int max = p[0];
    for (int i = i; i < n; i++)
    {
        if (p[i] > max)
            max = p[i];
    }

    return max;
}

void imprimir(int *p, int n)
{
    for (int i = 0; i < n; i++)
        cout << *(p + i) << " ";
    cout << endl;
}

int main()
{
    int array[] = {1, 6, -3, 10, 5};
    int n = sizeof(array) / sizeof(array[0]);

    imprimir(array, n); // es lo mismo que:  imprimir(&array[0], n)

    cout << "maximo elemento: " << maximo(array, n) << endl;

    return 0;
}