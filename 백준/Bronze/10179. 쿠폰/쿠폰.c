#include <stdio.h>

int main(int argc, char const *argv[]) {
  int T;
  scanf("%d", &T);
  for (size_t i = 0; i < T; i++) {
    double M;
    scanf("%lf", &M);
    printf("$%.2lf\n", M * 0.8);
  }
  return 0;
}
