#include <iostream>

using namespace std;

void modificar(int *p, int n){
    for(int i=0; i<n; i++)
        p[i] = p[i]*2;
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
    int n = 5;
    int array[] = {1, 2, 3, 4, 5};

    imprimir(array, n, "Array original");

    modificar(array, n);

    imprimir(array, n, "Array modificado");

    return 0;
}