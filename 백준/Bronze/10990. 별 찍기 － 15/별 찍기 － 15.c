#include <stdio.h>

int main(int argc, char const *argv[]) {
  int N;
  scanf("%d", &N);
  for (size_t i = 0; i < N; i++) {
    for (size_t j = N - 1; j > i ; j--) {
      printf(" ");
    }
    printf("*");
    for (size_t j = 0; j < i; j++) {
      printf(" ");
    }
    for (size_t j = 1; j < i; j++) {
      printf(" ");
    }
    if (i != 0) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
