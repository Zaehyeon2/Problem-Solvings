#include <stdio.h>

int main(int argc, char const *argv[]) {
  int S[10000] = {};
  int N, sum = 0;
  for (int i = 0; i < 10; i++) {
    scanf("%d", &N);
    S[N%42] = 1;
  }
  for (int i = 0; i < 1001; i++) {
    if (S[i] == 1){
      sum += 1;
    }
  }
  printf("%d\n", sum);
  return 0;
}
