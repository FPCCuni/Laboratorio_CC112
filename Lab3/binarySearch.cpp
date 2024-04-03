//Algoritmo de Búsqueda más popular y eficiente

//Funciona solo con arreglos ordenados

#include <iostream>
using namespace std;



int main(){

    int n;
    int clave;
    int indice = -1;
    cout << "ingrese dimension";
    cin >> n;
    cout << "ingrese clave "<<endl;
    cin >>clave;


    int a[n];
    cout <<"Ingrese los elementos de la matriz "<<endl;
    for(int i = 0; i < n; ++i){
        cin >>a[i];
    }

    int izq = 0;
    int der = n-1;

    while(izq<= der){
        int medio = (izq + der)/2;

        if(a[medio]< clave){
            izq = medio + 1;
        }else if(a[medio] > clave){
            der = medio -1;
        }else{
            indice  =medio;
            cout << "indice: " << medio;
            break;
        }
    }
    if(indice != -1){
    cout << "encontrado ";
    } else{
        cout << "no encontrado";
    }
    return 0; 
}