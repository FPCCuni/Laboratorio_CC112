/*tilizando punteros y un vector de tipo entero que tenga
por nombre year, escribir un
programa que genere el siguiente resultado:
El mes 1 tiene 31 dias.
El mes 2 tiene 28 dias.
................................
El mes 12 tiene 31 dias*/
#include <iostream>
using namespace std;

int main(){

    int year[]{31,28,31,30,31,30,31,31,30,31,30,31};

    int *p = year, meses =0;

    while(meses < 12){
        cout << "El mes " << (meses++) + 1 << " tiene " << *p++ << " dias" <<endl;
    }

    return 0; 
}