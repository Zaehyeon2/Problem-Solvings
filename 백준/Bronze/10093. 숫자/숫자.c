#include <stdio.h>

int main(int argc, char const *argv[]) {
  long A, B;
  scanf("%ld %ld", &A, &B);
  if (A < B){
    printf("%ld\n", B - A - 1);
    for (long i = A + 1; i < B; i++) {
      printf("%ld ", i);
    }
  }
  else if ( B < A){
    printf("%ld\n", A - B - 1);
    for (long i = B + 1; i < A; i++) {
      printf("%ld ", i);
    }
  }
  else {
    printf("0");
  }
  printf("\n");
  return 0;
}
