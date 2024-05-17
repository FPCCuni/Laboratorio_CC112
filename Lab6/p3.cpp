/*3. Escribe un programa que pida al usuario una cadena de
 caracteres y la  almacene dinámicamente en memoria*/

#include <iostream>
using namespace std;


int main(){
    //char a[10][100];
    

    //con punteros
    
    char* c = new char[50];
    cout << "Ingrese una cadena de caracteres: ";
    cin.getline(c,50);
    //funcion para contar la repeticion de caracteres
    //completar


    delete [] c; // liberamos memoria


    return 0; 
}