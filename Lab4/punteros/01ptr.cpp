#include <cstdio>

int main() {
  int lima{};
  printf("lima: %d\n", lima);
  int* direccion_lima = &lima;
  printf("&lima: %p\n", direccion_lima);
}