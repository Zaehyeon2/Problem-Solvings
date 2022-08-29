#include <stdio.h>

int main(int argc, char const *argv[]) {
  int F[46] = {};
  int N;
  F[0] = 0;
  F[1] = 1;
  F[2] = 1;
  for (int i = 2; i < 46; i++) {
    F[i] = F[i-1] + F[i-2];
  }
  scanf("%d", &N);
  printf("%d\n", F[N]);
  return 0;
}
