#include <iostream>

using namespace std;

void moverDisco(char *desde, char *hacia)
{
    cout << "mover disco " << *desde << " a " << *hacia << endl;
}


// algoritmo sin punteros: https://runestone.academy/ns/books/published/pythoned/Recursion/LasTorresDeHanoi.html
void moverTorre(int *altura, char *origen, char *destino, char *intermedio)
{
    if (*altura >= 1)
    {
        int nuevaAltura = *altura - 1;
        moverTorre(&nuevaAltura, origen, intermedio, destino);

        moverDisco(origen, destino);

        moverTorre(&nuevaAltura, intermedio, destino, origen);
    }
}


int main()
{
    int altura = 3;
    char origen = 'A';
    char destino = 'C';
    char intermedio = 'B';
    moverTorre(&altura, &origen, &destino, &intermedio);
    
    return 0;
}