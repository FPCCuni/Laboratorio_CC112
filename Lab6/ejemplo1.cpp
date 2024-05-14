#include <iostream>
using namespace std;

int main() {
    int tam = 20; // Tamaño original del arreglo
    int* lista = new int[tam]; // Creamos un arreglo dinámico de tamaño inicial tam

    // Inicializamos el arreglo con algunos valores de ejemplo

    for (int i = 0; i < tam; i++) {
        //lista[i] = i+1; //completar
    }

    // Mostramos el arreglo original
    cout << "Arreglo original:" << endl;
    for (int i = 0; i < tam; i++) {
        cout << lista[i] << " ";
    }
    cout << endl;


    // Queremos cambiar el tamaño para que el arreglo tenga espacio para 10 números más
    int nuevo_tam = tam + 10;

    // Creamos un nuevo arreglo del nuevo tamaño
    int* temp = new int[nuevo_tam];

    // Copiamos los datos del arreglo anterior al nuevo arreglo
    for (int i = 0; i < tam; i++) {
        temp[i] = lista[i];
    }

    // Eliminamos (liberamos) el arreglo anterior
    delete[] lista;

    // Cambiamos el puntero
    lista = temp;

    // Mostramos el arreglo con el nuevo tamaño
    cout << "Arreglo con nuevo tamaño:" << endl;
    for (int i = 0; i < nuevo_tam; i++) {
        cout << lista[i] << " ";
    }
    cout << endl;

    // Liberamos la memoria del nuevo arreglo
    delete[] lista;

    return 0;
}
