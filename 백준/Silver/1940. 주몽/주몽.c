#include <stdio.h>

int main(int argc, char const *argv[]) {
  int N, K, A[15001] = {},ans = 0;
  scanf("%d %d", &N, &K);
  for (int i = 0; i < N; i++) {
    scanf("%d", &A[i]);
  }
  for (int i = 0; i < N; i++){
    for ( int j = i+1; j < N; j++){
      if (A[i] + A[j] == K){
        ans += 1;
      }
    }
  }
  printf("%d\n", ans);
  return 0;
}
