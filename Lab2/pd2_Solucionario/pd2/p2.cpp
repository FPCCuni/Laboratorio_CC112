#include<iostream>
using namespace std;


const int rows = 3, cols = 4;

void tranpuesta(int m[rows][cols]){
    int m2[cols][rows];

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            m2[j][i] = m[i][j];
        }
    }


    for(int i=0; i<cols; i++){
        for(int j=0; j<rows; j++){
            cout << m2[i][j]<< " ";
        }
        cout<<endl;
    }

}

int main(){
    int m[rows][cols] = {{1, 2, 3, 4}, 
                        {5, 6, 7, 8}, 
                        {9, 10, 11, 12}};
    tranpuesta(m);

    return 0;
}