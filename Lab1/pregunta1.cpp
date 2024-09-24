/*Los múltiplos 3 o 5 menores que de 10 que son 3, 5, 6 y 9. La suma de estos múltiplos es
23. Encuentra la suma de todos los múltiplos de 3 o 5 menores que 1000.*/

#include <iostream>
using namespace std;

int main(){
    int n;
    int suma = 0;
    cout << " Ingrese el valor de n ";
    cin >> n;

    for(int i = 1; i < n; ++i){
        if(i%5 == 0 || i%3 == 0 ){
            suma+=i; //suma = suma + i;
        }
    } 

    cout << "La suma es "<< suma <<endl;

    return 0; 
}