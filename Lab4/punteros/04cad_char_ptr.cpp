#include <cstdio>

int main() {
  char minusculas[] = "abc?e";
  char mayusculas[] = "ABC?E";
  char* ptr_mayusculas = &mayusculas[0];

  *(minusculas + 3) = 'd';
  *(ptr_mayusculas + 3) = 'D';

  char letra_d = *(minusculas + 4); // minusculas se descompone en un puntero cuando agregamos
  char letra_D = *(ptr_mayusculas + 4);

  printf("minusculas: %s\nmayusculas: %s", minusculas, mayusculas);

  *(minusculas + 7) = 'g';
}