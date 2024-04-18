//hanoi
#include <iostream>
using namespace std;

void hanoi(int n, char origen, char auxiliar, char destino){
  if(n==1){
    cout << "Mover disco 1:  " << origen << " --> " << destino <<endl; 
  }else{
    hanoi(n-1, origen, destino, auxiliar);
    cout << "Mover disco " << n <<": " << origen << " --> " << destino <<endl;
    hanoi(n-1, auxiliar, origen, destino);
  }
}



int main(){
  int n;
  cout << " Ingrese el numero de discos" <<endl;
  cin >> n;

  hanoi(n,'A', 'B', 'C');

  return 0; 
}