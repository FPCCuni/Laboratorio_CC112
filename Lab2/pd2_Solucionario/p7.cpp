#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

void iniciarBarras(int barras[], int longitud){
    
    /*
    int barras_[] = {4, 7, 18, 16, 14, 16, 7, 13, 10, 2, 3, 8, 11, 20, 4, 7, 1, 7, 13, 17};
    for(int i=0; i<longitud; i++)
        barras[i] = barras_[i];
    */

    
    for(int i=0; i<longitud; i++)
        barras[i] = rand()%20 + 1; // números entre 1 y 20 
    
}

void imprimir(int barras[], int longitud){
    for(int i=0; i<longitud; i++){
        cout << barras[i] << " ";
    }
    cout <<endl;
}

bool esTriangulo(int lado1, int lado2, int lado3){
    if(lado1 >= lado2 + lado3) return false;
    if(lado2 >= lado1 + lado3) return false;
    if(lado3 >= lado1 + lado2) return false;

    return true;
}

float obtenerArea(int lado1, int lado2, int lado3){
    float semiperimetro = (lado1 + lado2 + lado3) / 2;
    // Formula de Herón
    return sqrt(semiperimetro*(semiperimetro - lado1)*(semiperimetro - lado2)*(semiperimetro - lado3));
}

void imprimirMaxArea(int barras[], int longitud){
    float maxArea = 0.0;
    int maxI = 0;
    int maxJ = 0;
    int maxK = 0;
    for(int i=0; i<longitud-2; i++){
        for(int j=i+1; j<longitud; j++){
            for(int k=j+1; k<longitud; k++){
                if(esTriangulo(barras[i], barras[j], barras[k])) {
                    float area = obtenerArea(barras[i], barras[j], barras[k]);
                    if(maxArea < area) {
                        maxArea = area;
                        maxI = i;
                        maxJ = j;
                        maxK = k;
                    }
                }
            }
        }
    }
    cout << "La superficie máxima es: " << maxArea << endl;
    cout << "Las barras son barra(" << maxI << ")="<<barras[maxI]<<", barra("<<maxJ<<")="<<barras[maxJ]<<", barra("<<maxK<<")="<<barras[maxK]<<"." << endl;
}

int main(){

    // Generación de números pseudoaleatorios
    srand(time(NULL));
    
    int longitud = 20;
    int barras[longitud];
    
    iniciarBarras(barras, longitud);
    imprimir(barras, longitud);
    imprimirMaxArea(barras, longitud);
    
    return 0;
}