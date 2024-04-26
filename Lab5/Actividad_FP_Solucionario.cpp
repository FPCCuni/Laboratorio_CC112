/*********************************************
 * Actividad de Fundamentos de Programación   *
 * Tomado de: Notas de Clases de Cerar Lara A.*
 **********************************************/
#include <iostream>
using namespace std;

/*
// 1. Los punteros tienen un tipo
int main(){
    int i = 88;
    double d = 55.66;
    int *iPtr = &i;
    double *dPtr = &d;

    iPtr = &d; //?? ERROR: asignar direcci?nn de un double (double*) a un puntero int (int*)
    dPtr = &i; // ?? ERROR: asignar dirección de un int (int*)  a un puntero double (double*)
    iPtr = i;  //?? ERROR: asignar int a un puntero a int (int*)
    int j = 99;
    iPtr = &j; // Ok: asignar dirección de in int (int*) a un puntero a int (int*)
    return 0;
}
*/


/*
int main(){
    int numero = 88;   //?? Declara una variable int llamada 'numero' y le asigna el valor 88
    int *pNumero;      //?? Declara un puntero a int llamado 'pNumero'
    pNumero = &numero; //?? Asigna la dirección de memoria de 'numero' al puntero 'pNumero'

    cout << pNumero << endl;  // ?? Imprime el contenido (valor) de 'pNumero' (dirección de 'numero')
    cout << &numero << endl;  // ?? Imprime la dirección de 'numero'
    cout << *pNumero << endl; // ?? Imprime el  valor almacenado en la dirección apuntada por pNumero (88)
                              // desreferencia un puntero
    cout << numero << endl;   // ?? Imprime el contenido (valor) de 'numero' (88)

    *pNumero = 99;            // ?? Asigna 99 a la ubicación apuntada por 'pNumero'
    cout << pNumero << endl;  // ?? Imprime el contenido (valor) de 'pNumero' (dirección de 'numero')
    cout << &numero << endl;  // ?? Imprime la dirección de 'numero'
    cout << *pNumero << endl; // ?? Imprime el valor almacenado en la dirección apuntada por 'pNumero'
    cout << numero << endl;   // ?? Imprime el contenido (valor) de 'numero' (99)
    cout << &pNumero << endl; // ?? Imprime la dirección de 'pNumero'
    return 0;
}
*/

/*
// 2. Punteros nulos
int main(){
    int *iPtr = 0; //NULL, nullptr//?? Declara un puntero a int y lo incializa en 0 (nullptr)
    cout << *iPtr << endl; // ?? ERROR: segment fault, intento de acceder a una dirección no válida

    int *p = NULL; // ?? Declara un puntero 'p' a int e inicializa su valor en NULL
    return 0;
}
*/

/*
// 3. Variables de referencia Referencias (o Alias) (&)
// En una expresión, &, denota dirección Ejemplos: int *p = &i; &p;
// En una declaración, &, denota una variable por referencia
// Ejemplos int &rvar = var; int f(int &n);
// Sintaxis:
//  tipo &nuevoNombre = nombreExistente;
//  tipo& nuevoNombre = nombreExistente;
//  tipo  & nuevoNombre = nombreExistente;
int main(){
    int numero = 88;         // Declara una variable int llamada 'numero' e inicializa su valor en 88
    int &refNumero = numero; // ??Declara una referencia 'refNumero' a la variable 'numero'

    cout << numero << endl;    // ?? Imprime el contenido (valor) de 'numero'
    cout << refNumero << endl; // ?? Imprime el contenido (valor al que hace referencia) 'refNumero'

    refNumero = 99;            // ?? Asigna el valor de 99 a 'refNumero' (por lo tanto a 'numero')
    cout << refNumero << endl; // ?? Imprime el nuevo valor de 'refNumero'(99)
    cout << numero << endl;    // ?? Imprime el nuevo valor de 'numero' (99)

    numero = 55;               // ?? Modifica el valor de 'numero' a 55
    cout << numero << endl;    // ?? Imprime el nuevo valor de 'numero' (55)
    cout << refNumero << endl; // ?? Imprime el nuevo valor de 'refNumero' (55)
    return 0;
}
*/

/*
// 4. Referencias y punteros
int main(){
    int &iRef;                      //??ERROR, las referencias deben declararse al momento de declararse
    int numero1 = 88, numero2 = 22; // ??Declara 2 vars. int e inicializa en 88 y 22
    int *pNumero1 = &numero1;       // ??Declara un puntero a int 'pNumero1' y lo inicializa con &numero1
    *pNumero1 = 99;                 // ??Cambia el valor apuntado por 'pNumero1' a 99
    cout << *pNumero1 << endl;      // ?? Muestra el valor apuntado por 'pNumero1' (dirección de 'numero1')
    cout << &numero1 << endl;       // ?? Muestra la dirección de 'numero1'
    cout << pNumero1 << endl;       // ?? Muestra el contenido (valor) de 'pNumero1' (dirección de 'numero1')
    cout << &pNumero1 << endl;      // ?? Muestra la dirección de 'pNumero1'

    pNumero1 = &numero2;            // ?? Asigna dirección de memoria de 'numero2' a 'numero1'


    int &refNumero1 = numero1;      // ??Declara una referencia a 'refNumero' y lo iniciliza con 'numero1'
    refNumero1 = 11;                // ??Cambia el valor de 'numero1' a 11
    cout << refNumero1 << endl;     // ??Muestra el contenido de 'refNumero1' (11)
    cout << &numero1 << endl;       // ??Muestra la dirección de 'numero1'
    cout << &refNumero1 << endl;    // ??Muestra la dirección de 'refNumero1'

    refNumero1 = numero2;     // ?? ERROR asignar dirección de 'numero2' (int*) a 'refNumero1' (int). No puede reasignar

    refNumero1 = &numero2; // ?? Asigna 'numero2' a 'numero1' (mediante 'refNumero1')

    numero2++; // equivale a numero2 = numero2 + 1; es decir, incrementa el valor de 'numero2' en 1
    cout << refNumero1 << endl; // ?? Muestra el valor de 'refNumero1' (22)
    cout << numero1 << endl;    // ?? Muestra el valor de 'numero1' (22)
    cout << numero2 << endl;    // ?? Muestra el valor de 'numeo2' (23)
    return 0;
*/


/*
// 5. Paso por referencia  vs Paso por punteros
// Paso por valor
int main(){
    int numero = 8;
    cout << "En main(): " << &numero << endl; //?? Imprime la dirección de 'numero' en la función main
    cout << numero << endl;                   // ?? Imprime el contenido (valor) de 'numero'
    cout << cuadrado(numero) << endl;         // ?? Llama a la función 'cuadrado' e imprime el valor devuelto
    cout << numero << endl;                   // ?? Imprime el valor de 'numero' luego de llamar a la función 'cuadrado'. No cambió, debido al paso por valor
}

int cuadrado(int n){                         // ?? Define la función 'cuadrado', con parámetro int n (copia de 'numero')
    cout << "En cuadrado(): " << &n << endl; // ?? Imprime la dirección de n en el cuerpo de la función 'cuadrado'
    n *= n;                                  // ?? actualiza el valor de n con el de n*n
    return n;
}
*/

/*
// Paso por referencia con argumentos de puntero
#include <iostream>
using namespace std;

void cuadrado(int *);

int main(){
    int numero = 8;
    cout << "En main(): " << &numero << endl; //?? Imprime la dirección de 'numero' en la función main
    cout << numero << endl;                   // ??Imprime el valor de numero
    cuadrado(&numero);                        // ??Llama a la función 'cuadrado' pasando la dirección de  'numero'
    cout << numero << endl;                   // ?? Valor de 'numero' luego de llamar a la función ha sido modificado
}

void cuadrado(int *pNumero){                                                 // ?? Definición de la función 'cuadrado' con parámetro puntero
    cout << "En cuadrado(): " << pNumero << endl; //?? Imprime dirección de pNumero en el cuerpo de la función 'cuadrado'
    *pNumero *= *pNumero;                         // ?? Desreferencia punteros para calcular el cuadrado del valor apuntado por 'pNumero'
}
*/

/*
// Paso por referencia con argumentos de referencia
#include <iostream>
using namespace std;

void cuadrado(int &);

int main(){
    int numero = 8;
    cout << "En main(): " << &numero << endl; // ?? Dirección de memoria de 'numero' en la función main
    cout << numero << endl;                   // ?? valor de 'numero'
    cuadrado(numero);                         //?? Llama a 'cuadrado' pasando 'numero' por referencia
    cout << numero << endl;                   // ?? El valor de 'numero' ha sido modoficado
}

void cuadrado(int &rNumero){                       // ?? Define 'cuadrado' con un parámetro int por referencia
    cout << "En cuadrado(): " << &rNumero << endl; // ?? Imprime la direccón de 'rNumero'
    rNumero *= rNumero;                            // ?? calcula el cuadrado del valor referenciado por 'rNumero'
}
*/

/*
// 6. Parametros de puntero/referencia de funcion const
// Un parámetro formal de función constante no se puede modificar dentro de la función.
// Utiliza const siempre que sea posible, ya que te protege
// de modificar inadvertidamente el parámetro y te protege contra muchos
// errores de programación.

// Un parámetro de función constante puede recibir argumentos tanto
// constantes como no constantes.
// Por otro lado, un parámetro de puntero/referencia de función no constante
// solo puede recibir un argumento no constante.
#include <iostream>
using namespace std;

int cuadradoConst(const int);
int cuadradoNonConst(int);
int cuadradoConstRef(const int &);
int cuadradoNonConstRef(int &);

int main(){
    int numero = 8;
    const int constNumero = 9;
    cout << cuadradoConst(numero) << endl;
    cout << cuadradoConst(constNumero) << endl;
    cout << cuadradoNonConst(numero) << endl;
    cout << cuadradoNonConst(constNumero) << endl;

    cout << cuadradoConstRef(numero) << endl;
    cout << cuadradoConstRef(constNumero) << endl;
    cout << cuadradoNonConstRef(numero) << endl;
    cout << cuadradoNonConstRef(constNumero) << endl;
    // ???
}

int cuadradoConst(const int numero){ //función con parámetro 'numero' int constante
    //numero *= numero;  // ?? ERROR: intenta alterar el valor constante de 'numero'
    return numero * numero;
}

int cuadradoNonConst(int numero){ // ?? función con parámetro int
    numero *= numero;
    return numero;
}

int cuadradoConstRef(const int &numero){ //?? función con parámetro una referencia const a un int 'numero'
    return numero * numero;
}

int cuadradoNonConstRef(int &numero){ // ?? función con parámtero una referencia a int
    return numero * numero;
}
*/

/*
// 7. Pasando el valor de retorno de la función

// Pasar el valor de retorno como referencia
#include <iostream>
using namespace std;

int &cuadradoRef(int &);
int *cuadradoPtr(int *);

int main(){
    int numero1 = 8;
    cout << "En main() &numero1: " << &numero1 << endl; //??Dirección de 'numero1' en main
    int &resultado = cuadradoRef(numero1);              //?? llama a la función 'cuadradoRef' pasa 'numero1' como argumento y almacena el valor devuelto en 'resultado'
    cout << "En main() &resultado: " << &resultado << endl; //?? derección de  'resultado' en main
    cout << resultado << endl;                              // ?? el valor de 'resultado'
    cout << numero1 << endl;                                // ??

    int numero2 = 9;
    cout << "En main() &numero2: " << &numero2 << endl; //??
    int *pResultado = cuadradoPtr(&number2);
    cout << "En main() pResultado: " << pResultado << endl; // ??
    cout << *pResultado << endl;                            // ??
    cout << numero2 << endl;                                // ??
}

int &cuadradoRef(int &rNumber){
    cout << "En cuadradoRef(): " << &rNumero << endl; //??
    rNumero *= rNumero;
    return rNumero;
}

int *cuadradoPtr(int *pNumero){
    cout << "En cuadradoPtr(): " << pNumero << endl; // ??
    *pNumero *= *pNumero;
    return pNumero;
}
*/

/*
// No debes pasar la variable local de la función como valor de retorno por
// referencia
#include <iostream>
using namespace std;

int *cuadradoPtr(int);
int &cuadradoRef(int);

int main(){
    int numero = 8;
    cout << numero << endl;               // ??
    cout << *cuadradoPtr(numero) << endl; // ??
    cout << cuadradoRef(numero) << endl;  // ??
}

int *cuadradoPtr(int numero){
    int resultadoLocal = numero * numero;
    return &resultadoLocal;
    // ?? ERROR 'resultadoLocal' solo existe en cuadradoPtr
}
int &cuadradoRef(int numero){
    int resultadoLocal = numero * numero;
    return resultadoLocal;
    // ??ERROR
}
*/

/*
//Pasar memoria asignada dinámicamente como valor de retorno por referencia
#include <iostream>
using namespace std;

int *cuadradoPtr(int);
int &cuadradoRef(int);

int main(){
    int numero = 8;
    cout << numero << endl;               // ??
    cout << *cuadradoPtr(numero) << endl; // ??
    cout << cuadradoRef(numero) << endl;  // ??
}

int *cuadradoPtr(int numero){
    int *resultadoAsignadoDinamicamente = new int(numero * numero);
    return resultadoAsignadoDinamicamente;
}

int &cuadradoRef(int numero){
    int *resultadoAsignadoDinamicamente = new int(numero * numero);
    return *resultadoAsignadoDinamicamente;
}
*/

/*
// 8. El arreglo se trata como un puntero
#include <iostream>
using namespace std;

int main(){
    const int TAM = 5;
    int numeros[TAM] = {11, 22, 44, 21, 41}; // ?? numeros es un puntero (const) al primer elemento

    //numeros = &numeros[0]; ??? // ERROR: se intenta reasignar un dirección a un puntero const. Redundante
    cout << &numeros[0] << endl;    // ??? dirección del primer elemento del arreglo (<> numeros)
    cout << numeros << endl;        // ?? dirección del primer elemento del arreglo
    cout << *numeros << endl;       // ?? valor almacenado en la  primera posición
    cout << *(numeros + 1) << endl; // ?? valor almacenado en la segunda posición
    cout << *(numeros + 4) << endl; // ?? calor almacenado en la quinta posición
}
*/


/*
// 9. Aritmetica de punteros
int main(){
    int numeros[] = {11, 22, 33};
    int *iPtr = numeros;
    cout << iPtr << endl;        // 0x22cd30
    cout << iPtr + 1 << endl;    // 0x22cd34 (incrementa 4 - sizeof int)
    cout << *iPtr << endl;       // 11
    cout << *(iPtr + 1) << endl; // 22
    cout << *iPtr + 1 << endl;   // 12
}
*/

/*
// 10. sizeof del arreglo
int main(){
    int numeros[100];
    cout << sizeof(numeros) << endl;    // (400)?? 100 x sizeof int
    cout << sizeof(numeros[0]) << endl; // 4 ?? sizeof int
    cout << "La dimension del arreglo es " << sizeof(numeros) / sizeof(numeros[0]) << endl;
}
*/

/*
// 11. Pasar un arreglo dentro y fuera de una función
// Un arreglo se pasa a una función como un puntero al primer elemento del
// arreglo. Puedes utilizar notación del arreglo (por ejemplo, int[]) o
// notación de puntero (por ejemplo, int*) en la declaración de
// función.

// El compilador siempre lo trata como un puntero (por ejemplo, int*).
// Por ejemplo, las siguientes declaraciones son equivalentes:
int max(int numeros[], int tam);
int max(int *numeros, int tam);
int max(int numeros[50], int tam);
*/

/*
// 12. Modificador const y parámetros de funciones
#include <iostream>
using namespace std;

// comenta el codigo: prototipos
int max(const int arr[], int tam);
void reemplazarPorMaximo(int arr[], int tam);
void imprimir(const int arr[], int tam);

int main(){
    const int TAM = 4;
    int numeros[TAM] = {11, 22, 33, 22};
    imprimir(numeros, TAM);
    cout << max(numeros, TAM) << endl;
    reemplazarPorMaximo(numeros, TAM);
    imprimir(numeros, TAM);
}

// comenta el codigo
//recibe un arreglo constante de int y su tamaño
int max(const int arr[], int tam){
    int max = arr[0];
    for (int i = 1; i < tam; ++i){
        if (max < arr[i])
            max = arr[i];
    }
    return max;
}

// comenta el codigo
//Recibe un arreglo de int y su tamaño
void reemplazarPorMaximo(int arr[], int tam){
    int maxValor = max(arr, tam);
    for (int i = 0; i < tam; ++i){
        arr[i] = maxValor;
    }
}

// comenta el codigo
//recibe un arreglo constante de enteros y su tamaño
void imprimir(const int arr[], int tam){
    cout << "{";
    for (int i = 0; i < tam; ++i){
        cout << arr[i];
        if (i < tam - 1)
            cout << ",";
    }
    cout << "}" << endl;
}

// Para evitar modificaciones accidentales, puedes aplicar el calificador
// const al parámetro de la función. Recuerda que const informa al
// compilador que el valor no debe cambiarse.

// Por ejemplo, supongamos que la función print() imprime el contenido
// del arreglo dado y no modifica el arreglo, podrías aplicar ``const``
// tanto al nombre del arreglo como a su tamaño, ya que no se espera que se
// cambien dentro de la función.
//void imprmir(const int arr[], int tam);
*/

/*
// Versión con punteros
#include <iostream>
using namespace std;

// ???
int max(const int *arr, int tam);

int main(){
    const int TAM = 5;
    int numeros[TAM] = {10, 20, 90, 76, 22};
    cout << max(numeros, TAM) << endl;
}

// ???
int max(const int *arr, int tam){
    int max = *arr;
    for (int i = 1; i < size; ++i)
    {
        if (max < *(arr + i))
            max = *(arr + i);
    }
    return max;
}
*/

/*
// 13. Paso por referencia y sizeof
#include <iostream>
using namespace std;

// ???
void fun(const int *arr, int tam);

// ???
int main(){
    const int TAM = 5;
    int a[TAM] = {8, 4, 5, 3, 2};
    cout << "sizeof(a) en main() es " << sizeof(a) << endl;
    cout << "direccion de a en main() es " << a << endl;
    fun(a, TAM);
}

//???
void fun(const int arr[], int tam){
    cout << "sizeof(arr) en funcion es " << sizeof(arr) << endl;
    cout << "direccion de arr en funcion es " << arr << endl;
}
*/

/*
// 14. Operando en un rango de un arreglo
//???
#include <iostream>
using namespace std;

// ?? parámetros punteros a int constantes
int suma(const int *inicio1, const int *final1);

//??
int main(){
    int a[] = {8, 4, 5, 3, 2, 1, 4, 8};
    cout << suma(a, a + 8) << endl;     // ??
    cout << suma(a + 2, a + 5) << endl; // ??
    cout << suma(&a[2], &a[5]) << endl; // ??
}

//???
int suma(const int *inicio1, const int *final1){
    int suma = 0;
    for (const int *p = inicio1; p != final1; ++p){
        suma += *p;
    }
    return suma;
}
//Para escribir una función que opera en un rango del arreglo dado,
//puedes pasar el puntero de inicio y el puntero de fin a la función.
//Por convención, la operación comenzará en el puntero inicial, hasta
//el puntero final, pero excluyendo el puntero final.

//En const int *p`, *p (contenido señalado) es constante, pero
//   p no es constante.
*/


/*
//15 C - string y punteros
#include <iostream>
#include <cstring> //para manipular cadenas con funciones predefinidas
using namespace std;

int main(){
    char msg1[] = "Hello"; //declara un arreglo de caracteres e iniciliza
    char c[] = {'H', 'o', 'l', 'a', '\0'};
    const char *msg2 = "Hello"; //declara un puntero a char, apunta a la cadena "Hello"
    // ???Esta cadena es de solo lectura no se puede modificar
    //? cout << msg1, msg2

    cout << strlen(msg1) << endl; // ???
    cout << strlen(msg2) << endl;
    cout << strlen("Hello") << endl;

    int tam = sizeof(msg1) / sizeof(char);
    cout << tam << endl; // ??? Considera el espacio ocupado por el caracter nulo al final
    for (int i = 0; msg1[i] != '\0'; ++i){
        cout << msg1[i];
    }
    cout << endl;

    for (char *p = msg1; *p != '\0'; ++p){
        // ????
        cout << *p;
    }
    cout << endl;

    cout << &msg1 <<endl;
    cout << &msg2 <<endl;
}

//Ten en cuenta que para la función C - string como strlen()
//(en el encabezado cstring, transferido desde ``string.h`` de C),
//no es necesario pasar la longitud del arreglo a la función.Esto se debe a que
//las ``C - string`` terminan en '\0'.La función puede iterar a través
// de los caracteres del arreglo hasta '\0'. Ejemplo
*/

/*
#include <iostream>
#include <cstring>
using namespace std;

int count(const char *str, const char c); //???

int main(){
    char msg1[] = "Hello, world";
    const char *msg2 = "Hello, world"; //???

    cout << count(msg1, 'l') << endl;
    cout << count(msg2, 'l') << endl;
    cout << count("Hello, world", 'l') << endl;
}

// ???
int count(const char *str, const char c){ //quite const
    int conteo = 0;
    while (*str){ //??? (*str != '\0')
        if (*str == c)
            ++conteo;
        ++str;
    }
    return conteo;
}
*/


//16. Puntero de funcion En C /C++, las funciones, como todos los elementos de datos,
// tienen una dirección. El nombre de una función es la dirección inicial donde
// reside la función en la memoria y, por lo tanto, puede tratarse como un puntero.

// Declaración de puntero de función
// tipo-retorno (*nombre-funcion-ptr)(lista-parametros)
// Ejemplos

//double (*fp)(int, int); // fp apunta a una función que toma dos enteros y devuelve un double                                                                                                                                                                double *dp;            // dp apunta a un double (double puntero)

//double *fun(int, int); // fun es una función que toma dos enteros y devuelve un  puntero a double

//double f(int, int); // f es una función que toma dos enteros y devuelve un double

//fp = f;            // Asigna la función f al puntero de función fp


/*
#include <iostream>
using namespace std;

int aritmetica(int, int, int (*)(int, int));
// ??? Protopito de función aritmetica que toma dos enteros y un puntero a función como argumentos.

int suma(int, int);
int substraccion(int, int);

//Definición de las funciones
int suma(int n1, int n2) { return n1 + n2; }
int substraccion(int n1, int n2) { return n1 - n2; }


int aritmetica(int n1, int n2, int (*operacion)(int, int)){
    return (*operacion)(n1, n2);
}

int main(){

    int numero1 = 5, numero2 = 6;

    // ??
    cout << aritmetica(numero1, numero2, suma) << endl;
    // ??
    cout << aritmetica(numero1, numero2, substraccion) << endl;
}
*/