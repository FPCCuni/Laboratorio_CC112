#include <iostream>

using namespace std;


void intercambiar(int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int n1 = 5;
    int n2 = 10;

    cout << "Numero 1: "<< n1<<endl;
    cout << "Numero 2: "<< n2<<endl;

    intercambiar(&n1, &n2);
    
    cout << "Despues del intercambio"<<endl;
    cout << "Numero 1: "<< n1<<endl;
    cout << "Numero 2: "<< n2<<endl;


    return 0;
}