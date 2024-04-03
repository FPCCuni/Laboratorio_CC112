#include <iostream>
using namespace std;

int main(){
    int n;
    int clave;

    int ind = -1;

    cin >>n >> clave;

    int a[n+1];

    for (int i = 1; i <=n; ++i){
        cin >> a[i];
    }

    for(int i = n; i>=1; --i){
        if(a[i] == clave){
            ind = i;
            break;
        }
    }

    if(ind != -1){
        cout << ind <<endl;
    }else{
        cout << "-1";
    }

  return 0; 
}