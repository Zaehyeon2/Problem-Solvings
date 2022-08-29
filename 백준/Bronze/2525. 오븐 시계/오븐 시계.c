#include <stdio.h>

int main(int argc, char const *argv[]) {
  int H, M, C;
  scanf("%d %d %d", &H, &M, &C);
  M += C;
  if (M >= 60) {
    H += M / 60;
    M = M % 60;
  }
  if ( H >= 24){
    H = H%24;
  }
  printf("%d %d\n", H, M);
  return 0;
}
