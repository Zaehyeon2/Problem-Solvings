#include <stdio.h>

int main(int argc, char const *argv[]) {
  int N;
  scanf("%d", &N);
  for (int i = 0; i < N; i++) {
    if (i % 2 == 0) {
      for (int j = 0; j < N * 2; j++) {
        if (j % 2 == 0) {
          printf("*");
        }
        else{
          printf(" ");
        }
      }
    }
    else{
      for (int j = 0; j < N * 2; j++) {
        if (j % 2 == 1) {
          printf("*");
        }
        else{
          printf(" ");
        }
      }
    }
    printf("\n");
  }
  return 0;
}
