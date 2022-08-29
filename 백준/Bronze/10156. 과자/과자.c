#include <stdio.h>

int main(int argc, char const *argv[]) {
  int K, N, M, Money;
  scanf("%d %d %d", &K, &N, &M);
  if (M >= K * N) {
    printf("0");
  }
  else {
    printf("%d", K * N - M);
  }
  return 0;
}
