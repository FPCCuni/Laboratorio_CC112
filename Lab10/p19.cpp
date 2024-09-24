/*9. Escribir un programa utilizando clases que permita separar un número en su 
parte real y parte entera. Ejemplo 234.23, parte real 0.23, parte entera 234*/

#include <iostream>
#include<iomanip> //fixed setprecision()
using namespace std;

class separar{
    float num;
    int pint;
    float preal;
public: 
    //constructor predeteminado
    separar():num(0),pint(0), preal(0){

    }

    //constructor de parámetros
    separar(float n):num(n),pint(0), preal(0){

    }

    void enteroReal(){
        pint = int(num);
        preal = num - pint;
        mostrar();
    }

    void mostrar(){
        cout << fixed << setprecision(2);
        cout << "Numero: " << num <<endl;
        cout << "Parte Entera: " << pint <<endl;
        cout << "parte Real: " << preal <<endl;
    }
};

int main(){
    separar A(334.89);

    separar B;

    B = separar(456.87);

    cout << "Primer objeto:\n ";
    A.enteroReal();

    cout << "SEgundo objeto: \n";
    B.enteroReal();


    return 0; 
}