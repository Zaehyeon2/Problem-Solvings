#include <stdio.h>

int main(int argc, char const *argv[]) {
  long T;
  scanf("%ld", &T);
  for (size_t i = 0; i < T; i++) {
    long N, C;
    scanf("%ld %ld", &N, &C);
    if (N % C == 0){
      printf("%ld\n", N/C);
    }
    else {
      printf("%ld\n", N/C + 1);
    }
  }
  return 0;
}
