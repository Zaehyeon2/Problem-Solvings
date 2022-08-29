#include <cstdio>

int arr[3][2];

int divi(int a, int b){
  int ret = a / b;
  if (a % b != 0) ret++;
  return ret;
}

int main(){
  int N, K; scanf("%d %d", &N, &K);
  int ans = 0;
  for(int i = 0; i < N; i++){
    int S, Y; scanf("%d %d", &S, &Y);
    arr[(Y - 1)/2][S]++;
  }
  ans += divi(arr[0][0] + arr[0][1], K);
  for(int i = 1; i < 3; i++){
    for(int j = 0; j < 2; j++){
      ans += divi(arr[i][j], K);
    }
  }
  printf("%d\n", ans);
}
