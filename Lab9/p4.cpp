/*(Contar líneas en un archivo)
 Escribe un programa que cuente el número de líneas 
en un archivo de texto.*/

#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ifstream archivo_entrada("archivo2.txt");

    string linea;

    int cont = 0; 

    while(getline(archivo_entrada,linea)){
        cont++;
    }

    cout << "Numero de lineas: " << cont << endl;

    archivo_entrada.close();

    return 0; 
}