// 4.cpp

#include <iostream>
using namespace std;

void desplazar(int A[], int n, int k) {
    if (n <= k || k < 1) {
        cout << "Error: k debe estar entre 1 y n-1" << endl;
        return;
    }

    int temp[k];
    for (int i = 0; i < k; ++i) {
        temp[i] = A[n - k + i];
    }
    for (int i = n - 1; i >= k; --i) {
        A[i] = A[i - k];
    }
    for (int i = 0; i < k; ++i) {
        A[i] = temp[i];
    }
}


int busqueda(int A[],int n ,int c) {
    int izq = 0, der = n - 1;
    while (izq <= der) {
        int medio = izq + (der - izq) / 2;
        if (A[medio] == c)
            return medio;
        if (A[izq] <= A[medio]) { 
            if (A[izq] <= c && c < A[medio])
                der = medio - 1;
            else
                izq = medio + 1;
        } else {
            if (A[medio] < c && c <= A[der])
                izq = medio + 1;
            else
                der = medio - 1;
        }
    }
    return -1;
}

int main() {
    int A[] = {0,1,2,4,5,6,7}; //{5, 6, 7, 0, 1, 2, 4};
    int n = sizeof(A)/sizeof(A[0]);
    int c = 0;

    desplazar(A,n,3);
    int resultado = busqueda(A,n,c);

    (resultado != -1) ? cout << resultado
                      : cout << resultado;
    return 0;
}
