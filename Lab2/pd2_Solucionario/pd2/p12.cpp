#include<iostream>
using namespace std;

void secuenciHailstone(int n){
    cout << n << " ";
    int sn;
    if(n == 1){ 
        cout <<endl;
        return;
    }else if(n%2 == 0){
        sn = n/2;
    }else{
        sn = n*3+1;
    }
    secuenciHailstone(sn);
}

int main(){
   
    secuenciHailstone(5);
    return 0;
}