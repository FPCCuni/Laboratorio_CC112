#include <iostream>
using namespace std;

void mezcla(int a1[], int a2[], int M[], int TAMa1, int TAMa2){
    int i =0 , j = 0,  k = 0;

    while(i<TAMa1 && j <TAMa2){
        if(a1[i] < a2[j]){
            M[k++] = a1[i++];
        }else{
            M[k++] = a2[j++];
        }
    }

    while(i < TAMa1){
        M[k++] = a1[i++];
    }

     while(j < TAMa2){
        M[k++] = a2[j++];
    }
}

int main(){
    int a1[] = {1,8};
    int a2[] = {2, 5, 7};

    int n1 = sizeof(a1)/sizeof(int);
    int n2 = sizeof(a2)/sizeof(int);

    int M[n1+n2];

    mezcla(a1,a2,M,n1,n2);

    for(int i = 0; i < n1+n2; i++){
        cout << M[i] << " ";
    }





    return 0; 
}