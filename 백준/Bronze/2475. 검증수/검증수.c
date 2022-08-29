#include <stdio.h>

int main(int argc, char const *argv[]) {
  int A,sum = 0;
  for (size_t i = 0; i < 5; i++) {
    scanf("%d", &A);
    sum += A*A;
  }
  printf("%d\n", sum%10);
  return 0;
}
