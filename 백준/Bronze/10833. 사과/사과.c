#include <stdio.h>

int main(int argc, char const *argv[]) {
  int Sn, Stn, An, sum = 0;
  scanf("%d", &Sn);
  for (size_t i = 0; i < Sn; i++) {
    scanf("%d %d", &Stn, &An);
    sum += An%Stn;
  }
  printf("%d\n", sum);
  return 0;
}
