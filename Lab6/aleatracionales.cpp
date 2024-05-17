//GEneración de números aleatorio racionales entre 0 y 1

#include <iostream>
#include<cstdlib> // rand() srand() RAND_MAX
#include<ctime>
using namespace std;

void aleatRacionales(int n){
    for(int i = 0; i < n; i++ ){
        float z = (double) rand()/RAND_MAX;
        cout  << z << " ";
    }
}

using namespace std;

int main(){
    int notas[5];
    cout << "sizeof(notas) es:  " << sizeof(notas) <<endl; 
    cout <<RAND_MAX <<endl;
    srand(time(0));
    int n = 10;
    aleatRacionales(n);

   


}


