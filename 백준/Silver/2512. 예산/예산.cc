#include <cstdio>

int N, M, money[100001];

bool decision(int mid){
  long long sum = 0;
  for ( int i = 0; i < N; i ++){
    if (mid >= money[i]){
      sum += money[i];
    }
    else{
      sum += mid;
    }
  }
  return sum <= M;
}

int main() {
  scanf("%d", &N);
  int Max = 0;
  for (int i = 0; i < N; i++) {
    scanf("%d", &money[i]);
    Max = Max < money[i] ? money[i] : Max;
  }
  scanf("%d", &M);
  int lo = 0, hi = Max + 1;
  while (lo + 1 < hi){
    int mid = (lo + hi) / 2;
    if(decision(mid)){
      lo = mid;
    }
    else{
      hi = mid;
    }
  }
  printf("%d\n", lo);
}
