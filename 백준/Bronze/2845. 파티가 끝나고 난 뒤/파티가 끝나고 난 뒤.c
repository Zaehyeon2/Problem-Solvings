#include <stdio.h>

int main(int argc, char const *argv[]) {
  int L, P;
  scanf("%d %d", &L, &P);
  int Per[5] = {};
  for (size_t i = 0; i < 5; i++) {
    scanf("%d", &Per[i]);
  }
  for (size_t i = 0; i < 5; i++) {
    printf("%d ", Per[i] - L*P);
  }
  printf("\n");
  return 0;
}
