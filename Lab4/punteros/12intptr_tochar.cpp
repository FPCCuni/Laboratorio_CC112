#include <iostream>
using namespace std;

int main()
{
    int* ptr= new int(72);
    char* cr = (char*)ptr; // reinterpret_cast<char*>(ptr)
    cout << *ptr << endl;
    cout << *cr << endl;
    cout << ptr << endl;
    cout << cr << endl; //no imprime direccion
    //el operador << no está sobrecargado para el tipo de dato char*,
    //por lo que al imprimir un puntero a caracter (cr),
    // no se imprime la dirección de memoria de manera directa.

    //Solucion:
    //1. conversion a ptr void
    cout << (void*)cr <<endl;

    //2. usar puntero auxiliar 
    void* aux = cr;
    cout << aux << endl;

 

    
    return 0;
}