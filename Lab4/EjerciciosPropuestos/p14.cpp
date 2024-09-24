#include <iostream>

using namespace std;

int *obtenerPunteroEnIndice(int *p, int indice)
{
    return &p[indice];
}

void imprimir(int *p, int n, string mensaje = "Array")
{
    cout << mensaje << endl;
    for (int i = 0; i < n; i++)
        cout << "direccion: " << (p + i) << ", valor: " << *(p + i) << endl;
}

int main()
{
    int n = 5;
    int array[] = {1, 2, 3, 4, 5};

    imprimir(array, n, "Array original");

    int indice = 2;
    int *p = obtenerPunteroEnIndice(array, 2);
    cout << "\nDireccion en el indice " << indice << ": " << p <<endl;;
    cout << "Valor en el indice " << indice << ": " << *p <<endl;

    return 0;
}