#include <cstdio>

int main() {
  int original = 100;
  int& original_ref = original;
  printf("Original:  %d\n", original);
  printf("Referencia: %d\n", original_ref);

  int nuevo_valor = 200;
  original_ref = nuevo_valor;
  printf("Original:  %d\n", original);
  printf("Nuevo valor: %d\n", nuevo_valor);
  printf("Referencia: %d\n", original_ref);
}