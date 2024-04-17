/*2.	Escribe un programa para
 imprimir la dirección del puntero
a una variable cuyo valor ingresa
 el usuario.*/
 #include <iostream>

// Función para encontrar el valor máximo en un arreglo
int encontrar_maximo(int *arr, int longitud) {
    // Verificar si el arreglo está vacío
    if (longitud == 0)
        return INT_MIN; // Retorna el mínimo valor entero si el arreglo está vacío
    
    int maximo = *arr; // Inicializamos el máximo con el primer elemento del arreglo
    // Recorremos el arreglo y actualizamos el máximo si encontramos un valor mayor
    for (int i = 1; i < longitud; ++i) {
        if (*(arr + i) > maximo) { // Comparamos el valor al que apunta el puntero con el máximo
            maximo = *(arr + i);   // Actualizamos el máximo si encontramos un valor mayor
        }
    }
    return maximo;
}

int main() {
    int arreglo[] = {1, 8, 3, 6, 10, 5};
    int longitud = sizeof(arreglo) / sizeof(arreglo[0]);
    
    // Llamar a la función para encontrar el valor máximo del arreglo
    int maximo = encontrar_maximo(arreglo, longitud);
    
    std::cout << "El valor máximo del arreglo es: " << maximo << std::endl;
    
    return 0;
}
