#include <stdio.h>

int main(int argc, char const *argv[]) {
  char A[101] = {};
  int sum = 0;
  scanf("%s", A);
  for (size_t i = 0; i < 101; i++) {
    if (A[i] != 0){
      sum += 1;
    }
  }
  printf("%d\n", sum);

  return 0;
}
