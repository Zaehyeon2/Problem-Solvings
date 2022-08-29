#include <stdio.h>

int main(int argc, char const *argv[]) {
  int T,Sub, Hn, sum_hn;
  float Hs, sum = 0;
  scanf("%d", &T);
  for (size_t i = 0; i < T; i++) {
    scanf("%d", &Sub);
    for (size_t j = 0; j < Sub; j++) {
      scanf("%d %f", &Hn, &Hs);
      sum += Hn * Hs;
      sum_hn += Hn;
    }
    printf("%d %.1f\n",sum_hn,sum/sum_hn);
    sum = 0;
    sum_hn = 0;
  }
  return 0;
}
