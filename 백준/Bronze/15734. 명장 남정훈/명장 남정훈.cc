#include <cstdio>

int Min(int a, int b) {
  if (a < b) return a;
  return b;
}

int main() {
  int L, R, A; scanf("%d%d%d", &L, &R, &A);
  while(1) {
    if (A <= 0) break;
    if (L < R) {
      L++; A--;
    }
    else {
      R++; A--;
    }
  }
  printf("%d\n", Min(L, R) * 2);
}
