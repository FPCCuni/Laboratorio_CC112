/*Declare un arreglo tridimensional, proceda a imprimir el arreglo
 utilizando punteros*/
 #include <iostream>
 using namespace std;
 
 int main(){
    int a[2][3][2] ={{{1,2},{3,4},{5,6}},
                     {{7,8},{9,10},{11,12}}};

    for (int i = 0; i < 2; ++i){
        for(int j = 0; j < 3; ++j){
            for(k = 0; k < 2; ++k){
                cout << *(*(*(a+i) + j)+k) <<endl;
            }
        }
    }
 
    return 0; 
 }