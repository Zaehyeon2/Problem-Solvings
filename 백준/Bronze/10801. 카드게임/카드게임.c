#include <stdio.h>

int main(int argc, char const *argv[]) {
  int A[9] = {}, B[9] = {}, As = 0, Bs = 0;
  for (int i = 0; i < 10; i++) {
    scanf("%d", &A[i]);
  }
  for (int i = 0; i < 10; i++) {
    scanf("%d", &B[i]);
  }
  for (int i = 0; i < 10; i++) {
    if (A[i] > B[i]) {
      As += 1;
    }
    else if (A[i] < B[i]){
      Bs += 1;
    }
  }
  if (As > Bs) {
    printf("A\n");
  }
  else if (As < Bs){
    printf("B\n");
  }
  else {
    printf("D\n");
  }
  return 0;
}
