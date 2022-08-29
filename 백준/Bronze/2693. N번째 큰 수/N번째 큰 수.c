#include <stdio.h>

int n;

int main(int argc, char const *argv[]) {
  int T;
  scanf("%d", &T);
  for (size_t k = 0; k < T; k++) {
    int A[11] = {};
    for (size_t i = 0; i < 10; i++) {
      scanf("%d", &A[i]);
    }
    for (size_t i = 0; i < 10; i++) {
      for (size_t j = 0; j < 10; j++) {
        if (A[j] < A[j+1]){
          int tmp;
          tmp = A[j];
          A[j] = A[j+1];
          A[j+1] = tmp;
        }
      }
    }
    printf("%d\n", A[2]);
  }


  return 0;
}
