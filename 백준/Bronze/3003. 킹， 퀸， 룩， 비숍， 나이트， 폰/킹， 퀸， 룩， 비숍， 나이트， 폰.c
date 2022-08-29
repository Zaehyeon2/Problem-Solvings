#include <stdio.h>

int main(int argc, char const *argv[]) {
  int A[6] = {};
  for (size_t i = 0; i < 6; i++) {
    scanf("%d", &A[i]);
  }
  printf("%d %d %d %d %d %d\n", 1 - A[0], 1 - A[1], 2 - A[2], 2 - A[3], 2 - A[4], 8 - A[5]);
  return 0;
}
