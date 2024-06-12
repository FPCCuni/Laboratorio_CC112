/*(Escribiendo en un archivo de texto)
Escribe un programa que tome una cadena de 
texto del usuario y la escriba en un archivo.*/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream archivo_salida("archivo2.txt", ios::out | ios::ate);

    string linea;

    cout << "Ingrese un texto: ";
    getline(cin, linea);

    archivo_salida << linea;

    archivo_salida.close();

    return 0; 
}