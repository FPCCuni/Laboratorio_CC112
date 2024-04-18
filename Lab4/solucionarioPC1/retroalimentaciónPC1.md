# Errores a corregir 

## Sobre el archivo .pdf

### Ejemplos encontrados en las entregas

**Pregunta3 Carlos.pdf.odt** 

Exportar word a pdf

https://www.xataka.com/basics/como-convertir-documento-word-pdf

Exportar .odt a pdf

https://www.ionos.es/digitalguide/online-marketing/vender-en-internet/convertir-odt-a-pdf/

 

## Sobre el nombre de los archivos .cpp

### Incorrecto

1. **Pregunta 1 - Chulluncuy Reynoso Américo.cpp**

2. **PREGUNTA3 - Juan _ rodriguez.cpp**

    Solo compila en VSCode

    No compila en DevC++

    "Por algún motivo solo funciona bien online" (Alumnos del curso CC112)
### Correcto

1. **Pregunta1_Americo_Chulluncuy.cpp**




DE PREFERENCIA COMPILAR CÓDIGO LOCALMENTE 

PROMOVER LA PORTABILIDAD DE CÓDIGO

## Sobre los identificadores válidos

1. Evitar el uso de caracteres especiales al nombrar sus variables. Por ejemplo

```C++
    //identificadodes a evitar
    int año;
    int rotación; 
```
RESPETAR LAS REGLAS PARA NOMBRAR VARIABLES


## String vs arreglo de caracteres

```C++
string frase;

//Para lectura de string
getline(cin.frase)

char frase[50];
//para leer arreglo de caracteres
cin.getline(frase,50);
```

## Sobre el uso de asignación dinámica

```C++
int *A;
...
int bi = 10;

A = new int[bi];
...
```
DEBE LIBERAR LA MEMORIA ASIGNADA DE FORMA DINÁMICA

``` C++
delete[] A;
```

## Sobre el contenedor vector

```C++
vector<int> v;           // Vector de enteros
vector<string> cadenas;  // Vector de cadenas
```

```C++
//Código en el examen
vector<char>frase2;
```


## Consecuencias de pequeños errores en programación.

https://ed.team/blog/los-7-peores-errores-de-programacion-de-la-historia
