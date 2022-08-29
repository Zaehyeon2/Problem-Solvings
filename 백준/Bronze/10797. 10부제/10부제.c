#include <stdio.h>

int main(int argc, char const *argv[]) {
  int N,sum = 0, Cn;
  scanf("%d", &N);
  for (size_t i = 0; i < 5; i++) {
    scanf("%d", &Cn);
    if (Cn == N){
      sum += 1;
    }
  }
  printf("%d\n", sum);
  return 0;
}
