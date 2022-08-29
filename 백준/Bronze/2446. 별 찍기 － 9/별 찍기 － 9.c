#include <stdio.h>

int main(){
  int N;
  scanf("%d", &N);
  for (int i = 0; i < N; i++){
    for(int j = 0; j < i; j++){
      printf(" ");
    }
    for(int j = N - 1; j > i;j--){
      printf("*");
    }
    for(int j = N - 1; j > i - 1;j--){
      printf("*");
    }
    printf("\n");
  }
  for (int i = N - 1; i > 0; i--){
    for(int j = 0; j < i - 1; j++){
      printf(" ");
    }
    for(int j = N; j > i;j--){
      printf("*");
    }
    for(int j = N; j > i - 1;j--){
      printf("*");
    }
    printf("\n");
  }
}
