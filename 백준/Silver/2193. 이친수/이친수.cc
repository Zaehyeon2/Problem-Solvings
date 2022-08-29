#include <cstdio>

long long chk[92];

int main() {
  int N;
  scanf("%d", &N);
  chk[1] = 1;
  chk[2] = 1;
  for ( int i = 3; i <= N; i++){
    chk[i] = chk[i-1] + chk[i-2];
  }
  printf("%lld\n",chk[N]);

}
