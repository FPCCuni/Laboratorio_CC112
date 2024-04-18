#include<iostream>
using namespace std;

bool contiene(int v[], int n, int valor){
    for(int i=0; i<n; i++)
        if(v[i] == valor)
            return true;
    return false;
}

void imprimir(int v[], int n){
    for(int i=0; i<n; i++){
        cout << v[i] <<" ";
    }
    cout<<endl;
}

int main(){
   int contador = 0, i = 0, n = 5, valor;
   int v[n];

   do{
        cout << "Ingresar un nro (10-100):" <<endl;
        cin >> valor;

        if(!contiene(v, contador, valor)){
            v[contador] = valor;
            contador++;
            imprimir(v, contador);
        }

        i++;
   }while(i != n );

    return 0;
}