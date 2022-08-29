#include <cstdio>

int f[12];

int main() {
  int T; scanf("%d", &T);
  while (T--) {
    int N; scanf("%d", &N);
    f[1] = 1; f[2] = 2; f[3] = 4;
    for (int i = 4; i <= N; i++) {
      f[i] = f[i-1] + f[i-2] + f[i-3];
    }
    printf("%d\n", f[N]);
  }
}
