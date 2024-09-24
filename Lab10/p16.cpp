/* 16 Escriba un programa que utilice clases y arreglo de objetos para leer y mostrar 
el nombre y el salario de los empleados de una empresa. Ejemplo de salida 
NOMBRE SALARIO 
Abel 2600 
Paul 2000 
Raquel 2100*/
#include <iostream>
using namespace std;

const int N = 2;

class Emp{
    char nombre[20];
    float salario;

public:
    void ingresoDatos();
    void mostrarDatos();
};
void Emp:: ingresoDatos(){
    cout << "Ingrese el nombre: ";
    cin.getline(nombre,20);
    cout << "ingrese el salario: ";
    cin >> salario;
    cin.ignore();
}

void Emp:: mostrarDatos(){
    cout << nombre << "\t" << salario <<endl;
}


int main(){
    Emp empl[N];

    for(int i = 0; i < N ; ++i){
        empl[i].ingresoDatos();
    }

    cout <<"\nNOMBRE \t SALARIO\n";
    for(int i = 0; i < N ; ++i){
        empl[i].mostrarDatos();
    }


    return 0; 
}