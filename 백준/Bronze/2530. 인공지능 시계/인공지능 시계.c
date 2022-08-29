#include <stdio.h>

int main(int argc, char const *argv[]) {
  int H, M, Min, C;
  scanf("%d %d %d %d", &H, &M, &Min, &C);
  Min += C;
  if (Min >= 60) {
    M += Min / 60;
    Min = Min % 60;
  }
  if ( M >= 60){
    H += M / 60;
    M = M % 60;
  }
  if (H >= 24) {
    H = H % 24;
  }
  printf("%d %d %d\n", H, M, Min);
  return 0;
}
