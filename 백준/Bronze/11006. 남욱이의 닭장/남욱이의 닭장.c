#include <stdio.h>

int main(){
  int T, M, N;
  scanf("%d", &T);
  for (int i = 0; i < T; i ++){
    scanf("%d %d", &M, &N);
    printf("%d %d\n", N*2-M, N-(N*2-M));
  }
}
