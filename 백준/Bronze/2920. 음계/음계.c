#include <stdio.h>

int main(int argc, char const *argv[]) {
  int C = 0;
  int B = 0;
  int A[7] = {};
  for (size_t i = 0; i < 8; i++) {
    scanf("%d", &A[i]);
  }
  for (size_t i = 0; i < 7; i++) {
    if (A[i] > A[i+1]){
      C += 1;
    }
    else if (A[i] < A[i+1]){
      B += 1;
    }
  }
  if (B == 7){
    printf("ascending\n");
  }
  else if (C == 7){
    printf("descending\n");
  }
  else {
    printf("mixed\n");
  }
  return 0;
}
