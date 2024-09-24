#include <iostream>

using namespace std;

int factorial(int *p)
{
    int respuesta = 1;
    for (int i = 1; i <= *p; i++)
        respuesta *= i;
    return respuesta;
}

int factorialRecursivo(int *p)
{
    if (*p <= 1)
        return *p;
    else
    {
        int n = *p - 1;
        return *p * factorialRecursivo(&n);
    }
}

int main()
{
    int n = 5;

    cout << "numero: " << n << endl;
    cout << "factorial: " << factorial(&n) << endl;
    cout << "factorial recursivo: " << factorialRecursivo(&n) << endl;

    return 0;
}