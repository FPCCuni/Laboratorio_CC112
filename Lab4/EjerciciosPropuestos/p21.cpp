#include <iostream>
using namespace std;

void imprimir(int **p, int filas, int columnas, string mensaje = "Matriz")
{
    cout << mensaje << endl;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
            cout << p[i][j] << " ";
        cout << endl;
    }
}

int **reservarMemoria(int filas, int columnas)
{
    int **p = new int *[filas];
    for (int i = 0; i < filas; i++)
        p[i] = new int[columnas];
    return p;
}

void liberarMemoria(int **p, int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
        delete[] p[i];
    delete[] p;
}

void iniciarMatriz(int **p, int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
        for (int j = 0; j < columnas; j++)
            p[i][j] = rand() % 5 + 1; // números del 1 al 5
}

void tranpuesta(int **matrizTrans, int **m, int rows, int cols)
{
    // rellenando matriz transpuesta
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            matrizTrans[j][i] = m[i][j];
}

void sumar(int **matrizSuma, int **m1, int **m2, int rows, int cols)
{

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            matrizSuma[i][j] = m1[i][j] + m2[i][j];
}

// algoritmo: https://learn.microsoft.com/es-es/cpp/parallel/amp/walkthrough-matrix-multiplication?view=msvc-170
void multiplicar(int **matrizMul, int **m1, int **m2, int rows1, int cols1, int cols2)
{
    for (int i = 0; i < rows1; i++)
        for (int j = 0; j < cols2; j++)
            matrizMul[i][j] = 0;

    for (int i = 0; i < rows1; i++)
        for (int j = 0; j < cols2; j++)
            for (int k = 0; k < cols1; k++)
                matrizMul[i][j] += m1[i][k] * m2[k][j];
}

int main()
{
    // generador de números aleatorios
    srand(time(NULL));

    int filas = 2;
    int columnas = 4;
    int **matriz1;
    int **matriz2;
    int **matriz3;
    int **matrizTrans;
    int **matrizSuma;
    int **matrizMul;

    matriz1 = reservarMemoria(filas, columnas);
    matriz2 = reservarMemoria(filas, columnas);
    matriz3 = reservarMemoria(columnas, filas);
    matrizTrans = reservarMemoria(columnas, filas); // trans(matriz1)
    matrizSuma = reservarMemoria(filas, columnas);  // matriz1 + matriz2
    matrizMul = reservarMemoria(filas, filas);      // matriz1 x matriz3

    iniciarMatriz(matriz1, filas, columnas);
    iniciarMatriz(matriz2, filas, columnas);
    iniciarMatriz(matriz3, columnas, filas);

    imprimir(matriz1, filas, columnas, "Matriz 1");
    imprimir(matriz2, filas, columnas, "Matriz 2");
    imprimir(matriz3, columnas, filas, "Matriz 3");

    // transpuesta
    tranpuesta(matrizTrans, matriz1, filas, columnas);
    imprimir(matrizTrans, columnas, filas, "Matriz 1 transpuesta");

    // suma
    sumar(matrizSuma, matriz1, matriz2, filas, columnas);
    imprimir(matrizSuma, filas, columnas, "Matriz 1 +  Matriz 2");

    // multiplicacion
    multiplicar(matrizMul, matriz1, matriz3, filas, columnas, filas);
    imprimir(matrizMul, filas, filas, "Matriz1 x  Matriz3");

    // liberando memoria
    liberarMemoria(matriz1, filas, columnas);
    liberarMemoria(matriz2, filas, columnas);
    liberarMemoria(matriz3, columnas, filas);
    liberarMemoria(matrizTrans, columnas, filas);
    liberarMemoria(matrizSuma, filas, columnas);
    liberarMemoria(matrizMul, filas, filas);

    return 0;
}