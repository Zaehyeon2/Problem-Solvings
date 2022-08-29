#include <stdio.h>

int main(int argc, char const *argv[]) {
  while (1){
    int A, B;
    scanf("%d %d", &A, &B);
    if (A == 0 & B == 0){
      break;
    }
    else if (B % A == 0) {
      printf("factor\n");
    }
    else if (A % B == 0) {
      printf("multiple\n");
    }
    else {
      printf("neither\n");
    }
  }
  return 0;
}
