#include <iostream>
using namespace std;
int main() {
    float V[6];
    for (int i = 0; i < 6; i++)
      *(V + i) = i * i; //cuadrado de i
    cout << "Direccion\t\tContenido" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << "V+" << i << " = " << V + i;
        cout << "\t\t V[" << i << "] = " << *(V + i) << "\n";
    }
}