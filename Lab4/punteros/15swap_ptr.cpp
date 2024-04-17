#include <iostream>
using namespace std;
int main () {
    
    int num1=30, num2=90;
    cout << "\nAntes del intercambio Num1= " <<num1 <<" Num2= "
        <<num2<<endl;
    swap( num1,num2 );
    cout << "\nDespues del intercambio Num1= " <<num1 <<" Num2= "
        <<num2<<endl;

    return 0;
   }

void swap(int *x, int *y) {
    int* temp;
    temp=x;
    x = y;
    y = temp;
}