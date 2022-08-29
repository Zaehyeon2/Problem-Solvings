#include <cstdio>
#include "algorithm"

int main() {
  long long i, j;
  scanf("%lld %lld", &i, &j);
  if (j < i){
    int tmp = j;
    j = i;
    i = tmp;
  }
  printf("%lld\n", (j * (j + 1)) / 2 - (i - 1) * i / 2);



}
