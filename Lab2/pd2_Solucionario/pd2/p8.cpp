#include<iostream>

using namespace std;

bool esTriangulo(int lado1, int lado2, int lado3){
    if(lado1 >= lado2 + lado3) return false;
    if(lado2 >= lado1 + lado3) return false;
    if(lado3 >= lado1 + lado2) return false;

    return true;
}

int main(){
   int arr[5] = {10, 12, 5, 7, 14};
   int longitud = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<longitud-2; i++){
        for(int j=i+1; j<longitud; j++){
            for(int k=j+1; k<longitud; k++){
                    if(esTriangulo(arr[i], arr[j], arr[k])) 
                        cout << "(" << arr[i] << ", " << arr[j] <<", "<< arr[k] << "): Es triangulo"<<endl;
                    else
                        cout << "(" << arr[i] << ", " << arr[j] <<", "<< arr[k] << "): NO es triangulo"<<endl;
                }
            }
        }

    return 0;
}