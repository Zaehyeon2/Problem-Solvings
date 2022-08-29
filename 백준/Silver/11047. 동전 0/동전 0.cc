#include <cstdio>

int arr[11];

int main() {
  int N, K, ans = 0; scanf("%d %d", &N, &K);
  for (int i = 0; i < N; i ++) {
    scanf("%d", &arr[i]);
  }
  int k = N - 1;
  for (int i = N - 1; i >= 0; i--) {
    ans += (K/arr[i]);
    K %= arr[i];
  }
  printf("%d\n", ans);
}
