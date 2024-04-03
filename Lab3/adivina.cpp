#include <iostream>
#include <cstdlib> //rand() srand()
#include <ctime> //time()
using namespace std;

int main(){
    srand(time(0));

    int aleat = rand() % 1001;

    int intento;

    

    do{
        cout << "Ingrese su numero" <<endl;
        cin >> intento;

        if(intento > aleat){
            cout << "numero muy grande" <<endl;
        }else if(intento < aleat){
            cout << "numero muy pequeño" <<endl;
        }else{
            cout << "Adivinaste el numero" <<endl;
        }
    }while(intento != aleat);


    return 0; 
}
