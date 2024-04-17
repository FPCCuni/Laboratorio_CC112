#include<iostream>
using namespace std;
int funcion(int, int);
int main() {

    int a, b;
    a = 10;
    b = 20;
    cout << "a,b = " << a << ", " << b << endl;
    cout << "funcion(a,b) =" << funcion(a, b) << endl;
    cout << "a,b = " << a << ", " << b << endl;
    return 0;
    }
int funcion(int n, int m) {
    n = n + 1;
    m = m + 2;
    return n + m;
}