#include<iostream>

using namespace std;

void imprimir(int v[], int longitud){
    for(int i=0; i<longitud; i++){
        cout << v[i] << " ";
    }
    cout <<endl;
}

int main(){
    int gravedades[20] = {10, 6, 4};
    int numPacientes = 3;

    // imprimir(gravedades, numPacientes);

    int gravedad;
    do{
        cout << "Ingrese la gravedad del paciente:";
        cin >> gravedad;

        if(numPacientes == 0){
            gravedades[0] = gravedad;      
        }
        else{
            int i=numPacientes-1;
            while(i != -1 && gravedad > gravedades[i]){
                gravedades[i+1] = gravedades[i]; 
                i--;
            }
            gravedades[i+1] = gravedad;
        }
        numPacientes++;
        imprimir(gravedades, numPacientes);
    }while(gravedad != 0);

    return 0;
}