#include <stdio.h>

int main(){
  int N;
  int total = 1;
  scanf("%d", &N);
  for(int i = 0 ; i < N; i++){
    total *= N - i;
  }
  printf("%d\n", total);
}
