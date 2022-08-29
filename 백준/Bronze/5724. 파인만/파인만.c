#include <stdio.h>

int main(int argc, char const *argv[]) {
  while (1) {
    int N, sum = 0;
    scanf("%d", &N);
    if ( N == 0 ){
      break;
    }
    else {
      for (size_t i = 0; i < N; i++) {
        if (i == 0) {
          sum += N*N;
        }
        else{
          sum += (i)*(i);
        }
      }
      printf("%d\n", sum);
    }
  }
  return 0;
}
