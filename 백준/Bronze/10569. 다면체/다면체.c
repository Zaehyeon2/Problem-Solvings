#include <stdio.h>

int main(int argc, char const *argv[]) {
  int T, V, E;
  scanf("%d", &T);
  for (size_t i = 0; i < T; i++) {
    scanf("%d %d", &V, &E);
    printf("%d\n", 2 - V + E);
  }
  return 0;
}
