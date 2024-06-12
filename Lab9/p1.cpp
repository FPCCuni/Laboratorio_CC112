/*(Leyendo un archivo de texto)
Escribe un programa que abra un archivo de texto y 
muestre su contenido en la consola.*/
#include <iostream>
#include <fstream> //para trabajar con archivos
//incluye clases que permiten leer y escribir
//datos en archivos de texto
//PRINCIPALES CLASES
//ifstream (input file stream) ~ cin: Permite leer archivos
//ofstream (output file stream) ~ cout: Permite escribir archivos
//fstream (file stream): permite leer y escribir archivos
//using namespace std;

int main(){
    //std::ifstream archivo_entrada;
    //archivo_entrada.open("archivo1.txt");
    std::ifstream archivo_entrada ("archivo1.txt", std::ios::in);
    if(!archivo_entrada){
        std::cerr << "Error al abrir el archivo. " << std::endl;
        return 1;
    }

    std::string linea;
    while(std::getline(archivo_entrada, linea)){
        std::cout << linea <<std::endl;
    }

    archivo_entrada.close();



    return 0; 
}