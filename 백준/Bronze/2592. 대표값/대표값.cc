#include <cstdio>

int inp[1002];

int main() {
  int sum = 0;
  for( int i = 0; i < 10; i++){
    int N; scanf("%d", &N); inp[N]++;
    sum += N;
  }
  printf("%d\n", sum / 10);
  int Max = 0, idx;
  for ( int i = 0; i < 1001; i += 10){
    if (inp[i] > Max){
      Max = inp[i];
      idx = i;
    }
  }
  printf("%d\n", idx);
}
