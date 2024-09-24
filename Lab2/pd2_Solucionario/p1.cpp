#include<iostream>
using namespace std;

bool esPrimo(int p){
    for(int i=2; i<p; i++)
        if(p%i == 0) return false;
    return true;
}

void primosGemelos(int n){
    int count=0, i=3;
    while(count!=n){
        if(esPrimo(i) && esPrimo(i+2)) {
            cout << i <<" " << i+2<<endl;
            count++;
        }
        i++;
    }
}

int main(){
    primosGemelos(5);
    return 0;
}