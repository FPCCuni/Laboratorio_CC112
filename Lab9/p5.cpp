/*(Concatenar dos archivos)
Escribe un programa que lea dos archivos de texto y 
concatene su contenido en un tercer archivo.*/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream archivo_entrada1("archivo51.txt");
    ifstream archivo_entrada2("archivo52.txt");

    ofstream archivo_salida("archivo_concatenado.txt");

    string linea;

    while(getline(archivo_entrada1, linea)){
        archivo_salida << linea <<endl; 
    }

    while(getline(archivo_entrada2, linea)){
        archivo_salida << linea <<endl; 
    }

    //cerrar los archivos.....

    return 0; 
}