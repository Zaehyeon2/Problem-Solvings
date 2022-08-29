#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  int mind, N;
  char ref[101][101] = {};
  scanf("%d", &N);
  for (int i = 0; i < N; i++) {
    scanf("%s", ref[i]);
  }
  scanf("%d", &mind);
  if (mind == 1){
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        printf("%c", ref[i][j]);
      }
      printf("\n");
    }
  }
  else if (mind == 2){
    for (int i = 0; i < N; i++) {
      for (int j = N-1; j >= 0; j--) {
        printf("%c", ref[i][j]);
      }
      printf("\n");
    }
  }
  else {
    for (int i = N-1; i >= 0; i--) {
      for (int j = 0; j < N; j++) {
        printf("%c", ref[i][j]);
      }
      printf("\n");
    }
  }
  return 0;
}
