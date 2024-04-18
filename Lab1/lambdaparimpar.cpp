#include <iostream>
using namespace std;



int main(){
    int n =6;

    //auto dice al compilador que deduzca el tipo de variable
    //FUNCION  LAMBDA ,anónima
    auto espar = [](int n){
        return n%2 == 0;};

    if(espar(n)){
        cout << " es par" <<endl;
    }else{
        cout << " es impar " <<endl;
    }


  return 0; 
}