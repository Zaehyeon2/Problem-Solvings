#include <cstdio>

bool paper[102][102];

int main() {
  int T, ans = 0; scanf("%d", &T);
  while(T--){
    int x, y; scanf("%d %d", &x, &y);
    for (int i = x; i < x + 10; i++) {
      for (int j = y; j < y + 10; j++) {
        paper[i][j] = 1;
      }
    }
  }
  for (int i = 0; i < 101; i++) {
    for (int j = 0; j < 101; j++) {
      if (paper[i][j] == 1){
        ans += 1;
      }
    }
  }
  printf("%d\n", ans);
}
