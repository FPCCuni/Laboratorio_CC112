/*Escribir un programa que permita encontrar la suma y diferencia de dos 
números complejos*/
#include <iostream>
using namespace std;

class complejo{
    float re;
    float im;

public:
    //definiendo constructrores
    complejo(){
        re = 0;
        im = 0;
    }

    complejo(float r, float i):re(r), im(i){

    }

    friend complejo suma(complejo, complejo);
    friend complejo resta(complejo, complejo);
    friend void mostrarc(complejo);


};

complejo  suma(complejo A, complejo B){
    complejo temp;
    temp.re = A.re + B.re;
    temp.im = A.im + B.im;
    return temp;
}

complejo  resta(complejo A, complejo B){
    complejo temp;
    temp.re = A.re - B.re;
    temp.im = A.im - B.im;
    return temp;
}

void mostrarc(complejo C){
    cout << C.re << " + " <<C.im << "i"<<endl;
}

int main(){
    //creando objetos complejos
    complejo c1 = complejo(2.0, 5.0);
    complejo c2 = complejo(3.0,4.0);
    complejo c3, c4;

    c3 = suma(c1,c2);
    c4 = resta(c1,c2);

    cout << "Suma = ";
    mostrarc(c3);
    cout << "Resta = "; 
    mostrarc(c4);


    return 0; 
}