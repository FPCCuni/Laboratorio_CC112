#include <iostream>

using namespace std;

// mejorar 

//void copiar( int *origen, int * destino, int tam)
// for (int i = 0 )
//*(dest+I) = *(origen +i)

// int *fin = origen + tamaño;

//while(origen < tamaño)
//*destino = *origen
origen++
destino++

void copiar(int array1[], int array2[], int n)
{
    int *p = array1;
    for (int i = 0; i < n; i++)
        array2[i] = p[i];
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
    int array1[] = {1, 6, -3, 10, 5, 4};
    int n = sizeof(array1) / sizeof(array1[0]);
    int array2[n];

    imprimir(array2, n, "Array 2 original");

    copiar(array1, array2, n);

    imprimir(array2, n, "Array 2 despues de copiar elementos");

    return 0;
}