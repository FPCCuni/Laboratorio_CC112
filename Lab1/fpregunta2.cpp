/*Escriba una función que tome como parámetros un vector y su 
tamaño y cambie el signo
de los elementos del vector.*/

#include <iostream>
using namespace std;

void cambiosigno(int a[], int n){
    for(int i = 0; i <n; ++i){
        if(a[i] < 0){
            a[i] = -a[i];
        }else{
            a[i] = -a[i];
        }

    }
}



int main(){
    int a[] = {-1, 3, 8, 7, -4};
    int n= sizeof a /sizeof a[0];
    cout << "Arreglo original"<<endl;
    for(int i = 0; i<n; ++i ){
        cout << a[i] << " ";
    }

    cambiosigno(a, n);

    cout << "Arreglo final"<<endl;
    for(int i = 0; i<n; ++i ){
        cout << a[i] << " ";
    }



  return 0; 
}