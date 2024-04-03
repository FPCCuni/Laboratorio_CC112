#include <iostream>
#include <chrono>
#include<clocale>

using namespace std;
using namespace std::chrono;

//Primer Algoritmo
int maxdif1(int a[], int tam){
    int maxDif = 0; // analizando cada par de valores
    for(int i = 0; i < tam; ++i){
        for(int j = 0; j < tam; ++j){
            int dif = abs(a[j] - a[i]);
            if(dif > maxDif)
                maxDif = dif;
        }
    }
    return maxDif;
}

//Segundo Algoritmo
int maxdif2(int a[], int tam){
    int maxDif = 0; // analizando cada par de valores
    for(int i = 0; i < tam; ++i){
        for(int j = i+1; j < tam; ++j){ // basta j = i +1
            int dif = abs(a[j] - a[i]);
            if(dif > maxDif)
                maxDif = dif;
        }
    }
    return maxDif;
}


//Tercer Algoritmo
int maxdif3(int a[], int tam){
    int maxi = a[0];
    int mini = maxi; // hallamos el mini y maxi valor
    for(int i = 1; i < tam; ++i){
            if(a[i] < mini)
                mini = a[i];
            if(a[i] > maxi)
                maxi = a[i];
    
    }
    return maxi - mini;
}

void llenarArreglo(int a[], int tam) {
    for (int i = 0; i < tam; ++i) {
        a[i] = rand() % 1000; 
    }
}

int main() {
    setlocale(LC_ALL,"");
    // Tamaños de entrada
    int datas[] = {1000, 5000, 10000, 15000, 100000}; 
    
    // Iteramos sobre los diferentes tamaños de entrada
    for (int tam : datas) {
        int a[tam];

        llenarArreglo(a,tam);

        auto tInic = high_resolution_clock::now(); // tiempo de inicio
        
        // Ejecutamos el Primer algoritmo
        maxdif1(a,tam);
        
        auto tFinal = high_resolution_clock::now(); // tiempo de finalización
        auto duration = duration_cast<microseconds>(tFinal - tInic); // Calculamos la duración
        
        cout << "Algoritmo 1 con tamaño de entrada " << tam << ": " << duration.count() << " microsegundos" << endl;
        
        //Ejecutamos el Segundo algoritmo
        tInic = high_resolution_clock::now();
        maxdif2(a,tam);
        tFinal = high_resolution_clock::now();
        duration = duration_cast<microseconds>(tFinal - tInic);
        cout << "Algoritmo 2 con tamaño de entrada " << tam << ": " << duration.count() << " microsegundos" << endl;
        
        // Ejecutamos el Tercer algoritmo
        tInic = high_resolution_clock::now();
        maxdif3(a,tam);
        tFinal = high_resolution_clock::now();
        duration = duration_cast<microseconds>(tFinal - tInic);
        cout << "Algoritmo 3 con tamaño de entrada " << tam << ": " << duration.count() << " microsegundos" << endl;
        
        cout << "\n";
    }
    
    return 0;
}
