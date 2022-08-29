#include <stdio.h>

int n;

int main(int argc, char const *argv[]) {
  int A[4] = {};
  for (size_t i = 0; i < 3; i++) {
    scanf("%d", &A[i]);
  }
  for (size_t i = 0; i < 3; i++) {
    for (size_t j = 0; j < 3; j++) {
      if (A[j] < A[j+1]){
        int tmp;
        tmp = A[j];
        A[j] = A[j+1];
        A[j+1] = tmp;
      }
    }
  }
  printf("%d\n", A[1]);
  return 0;
}
