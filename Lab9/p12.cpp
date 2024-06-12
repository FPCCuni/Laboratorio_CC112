/*12. Escribir un programa que lea el siguiente archivo de texto
Ejemplo salida 0 1 2 3 4 5 6 7 8 9
*/

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

void printArray(int a[], int tam){
    for (int i = 0; i < tam; ++i){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){
    ifstream fich("archivo12.txt");

    if(!fich.is_open()){
        cout << "Error al abrir el archivo\n";
        return 1;
    }

    int TAM = 100;
    int * ptr = new int[100];
    int cant = 0;

    string linea;

    while(getline(fich,linea)){

        stringstream ss(linea);
        int valor;

        while(ss >> valor){
            ptr[cant] = valor;
            cant++;
        }

    }

    printArray(ptr,cant);


    delete [] ptr;



    return 0; 
}