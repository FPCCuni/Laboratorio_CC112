#include <cstdio>

int main() {
  char minusculas[] = "abc?e";
  char mayusculas[] = "ABC?E";
  char* ptr_mayusculas = mayusculas; // Equivalente: &mayusculas[0]

  minusculas[3] = 'd'; // minusculas ahora contiene a b c d e \0
  ptr_mayusculas[3] = 'D'; // mayusculas ahora contiene A B C D E \0

  char letra_d = minusculas[3]; // letra_d igual a 'd'
  char letra_D = ptr_mayusculas[3]; // letra_D igual a 'D'

  printf("minusculas: %s\nmayusculas: %s", minusculas, mayusculas);

  minusculas[7] = 'g'; // Nunca hagas esto.
  
}