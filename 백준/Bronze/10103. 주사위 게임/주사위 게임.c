#include <stdio.h>

int main(int argc, char const *argv[]) {
  int T, S1 = 100, S2 = 100;
  scanf("%d", &T);
  for (size_t i = 0; i < T; i++) {
    int D1, D2;
    scanf("%d %d", &D1, &D2);
    if (D1 > D2){
      S2 -= D1;
    }
    else if (D1 < D2){
      S1 -= D2;
    }
  }
  printf("%d\n%d\n", S1, S2);
  return 0;
}
