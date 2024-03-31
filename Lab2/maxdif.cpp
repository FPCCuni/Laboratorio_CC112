#include <iostream>
#include <cmath> // para abs()




using namespace std;

int maxdif1(int a[], int tam){
    int maxDif = 0; // analizando cada par de valores
    for(int i = 0; i < tam; ++i){
        for(int j = 0; j < tam; ++j){ // basta j = i +1
            int dif = abs(a[j] - a[i]);
            if(dif > maxDif)
                maxDif = dif;
        }
    }
    return maxDif;
}


// version más eficiente
int maxdif2(int a[], int tam){
    int maxi = a[0];
    int mini = maxi; // hallamos el mini y maxi valor
    for(int i = 1; i < tam; ++i){
            if(a[i] < mini)
                mini = a[i];
            if(a[i] > maxi)
                maxi = a[i];
    
    }
    return maxi - mini;
}


int main(){

    int a[] ={17,29,11,4,20,8};

    int tam = sizeof a / sizeof a[0];

    int maxdifer = maxdif1(a,tam);

    cout << "La maxima diferencia es: " << maxdifer <<endl;

    return 0; 
}
