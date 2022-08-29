#include <stdio.h>

int main(int argc, char const *argv[]) {
  long F[92] = {};
  int N;
  F[0] = 0;
  F[1] = 1;
  F[2] = 1;
  for (int i = 2; i < 92; i++) {
    F[i] = F[i-1] + F[i-2];
  }
  scanf("%d", &N);
  printf("%ld\n", F[N]);
  return 0;
}
