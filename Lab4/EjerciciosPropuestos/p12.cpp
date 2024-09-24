#include <iostream>

using namespace std;

int invertirCifras(int *p)
{
    int nuevoNumero = 0;
    int numero = *p;
    while (numero != 0)
    {
        int cifra = numero % 10;
        numero = numero / 10;
        nuevoNumero = nuevoNumero * 10 + cifra;
    }

    return nuevoNumero;
}

int main()
{
    int n = 105;

    cout << "numero: " << n << endl;
    cout << "numero invertido: " << invertirCifras(&n) << endl;

    return 0;
}