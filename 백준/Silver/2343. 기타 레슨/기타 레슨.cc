#include <cstdio>

int N, M, record[100001];

bool decision(int mid){
  int cnt = 1, sum = mid;
  for ( int i = 0; i < N; i ++){
    if (sum >= record[i]){
      sum -= record[i];
    }
    else{
      cnt++;
      sum = mid - record[i];
    }
  }
  return cnt <= M;
}

int main() {
  scanf("%d %d", &N, &M);
  int Max = 0;
  for (int i = 0; i < N; i++) {
    scanf("%d", &record[i]);
    Max = record[i] > Max ? record[i] : Max;
  }
  int lo = Max - 1, hi = 100000001;
  while (lo + 1 < hi){
    int mid = (lo + hi) / 2;
    if(decision(mid)){
      hi = mid;
    }
    else{
      lo = mid;
    }
  }
  printf("%d\n", hi);
}
