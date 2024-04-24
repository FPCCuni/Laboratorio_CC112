#include <iostream>

using namespace std;

void imprimir(int *p)
{
    cout << "numero: " << *p << endl;
}

int main()
{
    int n;

    cout << "Digite un numero: ";
    cin >> n;

    imprimir(&n);

    return 0;
}