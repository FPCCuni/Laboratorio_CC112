/*. Escribe un programa para imprimir el valor de
 la dirección del puntero a una
variable cuyo valor ingresa el usuario.
*/
#include <iostream>
using namespace std;

void f(int *p){
    cout << *p <<endl;
}

int main(){
    int  n = 6;
    int *p = &n;
    cout << *p <<endl;
    f(&n);


    return 0; 
}