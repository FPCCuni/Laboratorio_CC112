#include <iostream>

using namespace std;

int main()
{
    // número
    int n;
    // puntero que almacena la dirección de memoria del número
    int *p = &n;

    cout << "Digite un numero: ";
    cin >> *p;

   
    cout << "numero, *p " << *p << endl;
    cout << "numero, n "  << n <<endl;

    int clas_birds[] = {2,4,5,6,7};

    for (auto val: clas_birds){
        cout << val <<" ";
    }

    cout <<endl;
    int num[] = {1,2,3,4,5,6};
    cout << "num[12] = " << num[12]<<endl;
    
    num[12] = 1000;
    cout << "num[12]: " << num[12]<<endl;


    //read beyond bounds: Will read garbade
    //or crash your program
    //the compilers allows it, 

    return 0;

}