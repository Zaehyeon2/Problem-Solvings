#include <cstdio>

long long chk[1002][10];

int N, ans;

int main() {
  scanf("%d", &N);
  for (int i = 0; i < 10; i++) {
    chk[1][i] = 1;
  }
  for (int i = 1; i <= N; i++) {
    chk[i][0] = 1;
  }
  for (int i = 2; i <= N; i++) {
    for (int j = 1; j < 10; j++) {
      chk[i][j] = (chk[i][j-1] + chk[i-1][j]) % 10007;
    }
  }
  for ( int i = 0; i < 10; i++) {
    ans += chk[N][i] % 10007;
  }
  printf("%d\n", ans % 10007);
}
