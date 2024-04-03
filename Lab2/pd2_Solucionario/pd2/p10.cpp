#include<iostream>

using namespace std;

void ordenarBurbuja(int v[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - 1; j++)
    {
      if (v[j] > v[j + 1])
      {
        int temp = v[j];
        v[j] = v[j + 1];
        v[j + 1] = temp;
      }
    }
  }
}

void imprimir(int v[], int longitud){
    for(int i=0; i<longitud; i++){
        cout << v[i] << " ";
    }
    cout <<endl;
}

int main(){
    int A[]={6, 13, 4, 12, 8, 7};
    int longitud = sizeof(A)/sizeof(A[0]);
    
    ordenarBurbuja(A, longitud);
    imprimir(A, longitud);
    
    int iesimo = 0;
    
    cout << "Ingresa i-esimo: ";
    cin >> iesimo;

    cout << "El "<<iesimo<<"-esimo menor es "<<A[iesimo-1]<<endl;
    return 0;
}