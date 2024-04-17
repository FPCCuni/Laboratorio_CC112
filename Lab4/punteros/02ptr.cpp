#include <cstdio>

int main() {
  int lima{};
  int* direccion_lima = &lima;
  printf("Valor en direccion_lima: %d\n", *direccion_lima);
  printf("Direccion lima: %p\n", direccion_lima);
  *direccion_lima = 17325;
  printf("Valor en direccion_lima: %d\n", *direccion_lima);
  printf("Direccion lima: %p\n", direccion_lima);
}