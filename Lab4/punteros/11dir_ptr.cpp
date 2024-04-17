#include <iostream>
using namespace std;
int main ()
{
    int val1, val2;
    int * ptr1, *ptr2, ptr3;
    ptr1 = &val1;
    *ptr1 = 10; 
    ptr1 = &val2;
    *ptr1 = 20;
    ptr3=50;
    
    cout << "\nval1 = " << val1<< '\n';
    cout << "Direccion de val1 = " << ptr1<< '\n';
    cout << "val2 = " << val2 << '\n';
    cout << "Direccion de val2 = " << ptr2<< '\n';
    cout << "val3 = " << ptr3 << '\n';
    cout << "Direccion de val3 = " << &ptr3 << '\n';
    
    return 0;
}