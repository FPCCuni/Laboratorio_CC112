#include <iostream>
#include <cstdlib> //  rand(), srand()
#include <ctime>   // time()
using namespace std;

int main() {
    int matriz[3][3];
    int mayor = 20, menor = 100; 

    srand(time(0));
    
    cout << "Matriz generada:" << endl;
    
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            matriz[i][j] = rand() % 81 + 20; 
            cout << matriz[i][j] << "\t";
            if (matriz[i][j] > mayor)
                mayor = matriz[i][j];
            if (matriz[i][j] < menor)
                menor = matriz[i][j];
        }
        cout << endl;
    }

    cout << "\nEl mayor elemento de la matriz es: " << mayor << endl;
    cout << "El menor elemento de la matriz es: " << menor << endl;

    return 0;
}

