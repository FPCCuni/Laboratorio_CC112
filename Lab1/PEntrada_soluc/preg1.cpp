#include <iostream>
using namespace std;

int main() {
    int numero;
    int suma = 0;

    cout << "Ingrese 5 números enteros:" << endl;
    for (int i = 0; i < 5; ++i) {
        cin >> numero;
        suma += numero;
    }

    // Calculo del promedio
    float promedio = (float) suma/5;
   
    cout << "El promedio de los 5 números enteros ingresados es: " << promedio << endl;

    return 0;
}

