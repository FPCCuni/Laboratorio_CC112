/*(Copiar contenido de un archivo a otro)
Crea un programa que lea un archivo de 
texto y copie su contenido en otro archivo.*/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream archivo_entrada("archivo_origen3.txt");
    ofstream archivo_salida("archivo_destino3.txt");

    string linea;
    while(getline(archivo_entrada,linea)){
        archivo_salida << linea << endl;
    }
    //getline() devuelve una referencia al flujo
    //de entrada (istream&) que se evalua a true o false
    // si la operacion fue exitosa o no.

    archivo_entrada.close();
    archivo_salida.close();

    return 0; 
}