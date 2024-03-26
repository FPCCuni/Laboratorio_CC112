#include <iostream>
using namespace std; 

int main() {
    int n;

    cout << "Ingrese un entero no negativo: ";
    cin >> n;

    // control de filas
    for (int i = n; i >= 1; --i) {
        // control de espacios
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        
        // Imprimir asteriscos
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
