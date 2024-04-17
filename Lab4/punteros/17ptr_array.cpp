#include <iostream>
using namespace std;

int main () {
    int array[4];
    int *ptr;
    int *pa;
    pa = array;
    ptr = &array[0];
    cout << "\nptr++ = "<< ptr++ << endl;
    cout << "\npa++ = "<< pa++ << endl;

    cout<<"\nDireccion del arreglo con ayuda de los punteros: "<< endl;
    for (int i = 0; i < 4; ++i)
    {
        cout << "ptr + " << i << " = "<< ptr + i << endl;
    }
    cout << "ptr++ = "<< ptr++ << endl;
    cout << "pa++ = "<< pa++ << endl;
    return 0;
   }