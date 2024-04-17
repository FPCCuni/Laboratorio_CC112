#include <iostream>
using namespace std;

void function_A(int &x, int &y) {

    x= x+10;
    y=y+x;
 }
int main () {
    int num1;
    int num2;
    cout<<"\nIngresa el valor de Num1 y Num2:";
        cin>>num1>>num2;
    cout << "\nAntes de la llamada a la funcion Num1= "
    <<num1 <<" Num2= " <<num2<<endl;
    function_A( num1,num2 );
    cout << "\nDespues de la llamada a la funcion Num1= "
    <<num1 <<" Num2= " <<num2<<endl;
        return 0;
}