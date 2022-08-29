#include <cstdio>

int inp[31];

int main() {
  for(int i = 0; i < 28; i ++){
    int n; scanf("%d", &n);
    inp[n] = 1;
  }
  for (int i = 1; i <= 30; i ++){
    if (inp[i] == 0) {
      printf("%d\n", i);
    }
  }
}
