#include <stdio.h>

int main(int argc, char const *argv[]) {
  int Si, Ji, Max = 0, N;
  for (size_t i = 0; i < 9; i++) {
    scanf("%d", &N);
    if (N > Max){
      Max = N;
      Si = i;
      }
    }
  printf("%d\n%d\n", Max, Si+1);
  return 0;
}
