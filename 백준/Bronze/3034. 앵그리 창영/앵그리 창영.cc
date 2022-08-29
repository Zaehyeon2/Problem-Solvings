#include <cstdio>

int main() {
  int N, W, H; scanf("%d %d %d", &N, &W, &H);
  int Max = (W * W) + (H * H);
  while (N--) {
    int inp; scanf("%d", &inp);
    if (Max < inp * inp) {
      printf("%s\n", "NE");
    }
    else {
      printf("%s\n", "DA");
    }
  }
}
