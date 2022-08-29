#include <stdio.h>

int main(int argc, char const *argv[]) {
  int N;
  scanf("%d", &N);
  for (int i = 0; i < N * 2; i++) {
    if (N == 1) {
      printf("*\n");
      break;
    }
    else{
      if (i % 2 == 0) {
        for (int j = 0; j < N; j++) {
          if (j % 2 == 0) {
            printf("*");
          }
          else{
            printf(" ");
          }
        }
      }
      else{
        for (int j = 0; j < N; j++) {
          if (j % 2 == 1) {
            printf("*");
          }
          else{
            printf(" ");
          }
        }
    }
    }
    printf("\n");
  }
  return 0;
}
