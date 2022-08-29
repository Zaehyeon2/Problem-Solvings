#include <stdio.h>

int main(int argc, char const *argv[]) {
  int N;
  scanf("%d", &N);
  for (int i = 0; i < N; i++) {
      for (size_t j = 0; j < N; j++) {
        printf("*");
      }
      printf("\n");
  }
  return 0;
}
