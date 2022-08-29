#include <stdio.h>

int main(){
  int N;
  scanf("%d", &N);
  for (size_t i = 0; i < N; i++){
    for (int j = i + 1; j > 0; j--) {
      printf("*");
    }
    printf("\n");
  }
  for (size_t i = N - 1; i > 0 ; i--) {
    for (int j = i; j > 0; j--){
      printf("*");
    }
     printf("\n");
  }
}
