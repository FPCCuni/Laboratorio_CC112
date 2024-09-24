#include <iostream>

using namespace std;

int main()
{
    // número
    int n;
    // puntero que almacena la dirección de memoria del número
    int *p = &n;

    cout << "Digite un numero: ";
    cin >> n;

    cout << "numero n: " << n << endl;
    cout << "direccion, &n: " << &n << endl;

    cout << "puntero p: " << p << endl;
    cout << "direccion del puntero, &p: " << &p << endl;
    cout << "valor que apunta el puntero, *p: " << *p << endl;

    return 0;
}