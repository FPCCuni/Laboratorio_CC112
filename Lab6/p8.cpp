/*8 Implementa una función que reciba un arreglo dinámico de 
caracteres y su 
tamaño, y devuelva la longitud de la cadena más larga.*/

#include <iostream>
#include <cstring>
using namespace std;

int cadLarga(char** cad, int numCad){
    int maxlong = 0;
    for(int  i=0; i < numCad; i++){
        int longitud = strlen(cad[i]);
        if(longitud > maxlong){
            maxlong = longitud;
        }
    }
    return maxlong;
}

int main(){
    
    int numCad;

    cout << "Ingrese el numero de cadenas: ";
    cin >> numCad;

    char **cadenas = new char*[numCad];

    cin.ignore(); //LIMPIA EL BUFFER
    //Ingresar y almacenar las cadenas
    for(int i = 0; i <numCad; i++){
        char c[100];
        cout << "Ingrese la cadena " << i+1 <<": ";
        cin.getline(c,100);
        cadenas[i] = new char[strlen(c)+1];
        strcpy(cadenas[i], c);   
    }

    int lonMax = cadLarga(cadenas, numCad);

    cout << "La longitud de la cadena mas larga es: " <<lonMax <<endl;


    //LIBERAR MEMORIA CASO PUNTERO A PUNTERO
    for(int i = 0; i < numCad; i++){
        delete [] cadenas[i]; 
    }
    delete [] cadenas;


    return 0; 
}