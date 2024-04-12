#include <iostream>
#include <climits> // para acotar variables tipo int
using namespace std;

double promMenoresElem(int A[], int n) {
    int primerMenor = INT_MAX;
    int segundoMenor = INT_MAX;

    for (int i = 0; i < n; ++i) {
        if (A[i] < primerMenor) {
            segundoMenor = primerMenor;
            primerMenor = A[i];
        } else if (A[i] < segundoMenor && A[i] != primerMenor) {
            segundoMenor = A[i];
        }
    }
    return 1.0*(primerMenor + segundoMenor)/2;
}

int main() {
    

    int A[]= {48, 77, 7, 11, 49, 99, 78};
    int n = sizeof(A)/sizeof(A[0]);

    cout << promMenoresElem(A,n) <<endl;

    return 0;
}
