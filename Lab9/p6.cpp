/*(Contar palabras en un archivo)
Crea un programa que lea un archivo de texto y 
cuente el número de palabras.*/

#include <iostream>
#include <fstream>
#include <sstream> 
using namespace std;

int main(){
    ifstream fich("archivo6.txt"); //abrimos el archivo para lectura

    string linea, palabra;

    int cont = 0;

    while(getline(fich, linea)){//while(fich.getline(linea,MAX_LONG))
        stringstream ss(linea); // creamos un flujo de cadena stringstream
        // llamado ss y lo inicializamos con la linea leida
        while(ss >> palabra){
            cont++;
        }
    }

    cout << "Numero de palabras: " << cont << endl;


    return 0; 
}

//TAREA
//Resolver el mismo ejercicio sin utilizar
//string
//<sstream>

//char[100];   strtok()