#include<iostream>
using namespace std;

int main(){
   float n1, n2, n3, n4, n5, promedio;

   cout<< "Ingrese notas: "<<endl;
   cin>>n1 >> n2 >> n3 >> n4 >> n5;
   
   promedio = (n1 + n2 + n3 + n4 + n5)/5;
   cout<<"Promedio: " << promedio <<endl;

    return 0;
}