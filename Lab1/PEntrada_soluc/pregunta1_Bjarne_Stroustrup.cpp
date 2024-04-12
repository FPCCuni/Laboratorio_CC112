#include <iostream>
using namespace std;

int main() {
    int numero;
    int suma = 0;
    int cont = 0;
    while(cont < 2){
    cout << "Ingrese 5 numeros enteros:" << endl;
    for (int i = 0; i < 5; ++i) {
        cin >> numero;
        suma += numero;
    }

    // Calculo del promedio
    float promedio = (float) suma/5; //equivalente en C++ static_cast<float>(suma)/5;
   
    cout << "El promedio es: " << promedio << endl;
    cout << "\n";
	cont ++;
	}
    

    return 0;
}

