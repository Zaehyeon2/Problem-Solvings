#include <stdio.h>

int main(int argc, char const *argv[]) {
  int A, B, C, D, C1 = 0, C2 = 0;
  scanf("%d %d %d %d", &A,&B,&C,&D);
  while ( A > 0 || D > 0){
    if (A != 0) {
      A -= 1;
      C1 += 1;
    }
    if (D != 0){
      D -= 1;
      C1 += 1;
    }
  }
  while ( B > 0 || C > 0) {
    if (B != 0) {
      B -= 1;
      C2 += 1;
    }
    if (C != 0) {
      C -= 1;
      C2 += 1;
    }
  }
  if (C1 >= C2) {
    printf("%d\n", C2);
  }
  else {
    printf("%d\n", C1);
  }
  return 0;
}
