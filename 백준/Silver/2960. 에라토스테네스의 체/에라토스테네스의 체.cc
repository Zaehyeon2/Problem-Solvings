#include <cstdio>

int num[1001];

int main() {
  int N, K; scanf("%d %d", &N, &K);
  int seq = 0;
  for(int i = 2; i <= N; i++){
    if (num[i] == 0){
      for ( int j = i; j <= N; j += i){
        if (num[j] == 0) {
          seq++;
          num[j] = 1;
          if (seq == K){
            printf("%d\n", j);
          }
        }
      }
    }
  }
}
