#include <stdio.h>

int main() {
  float A, B, C, D, seq[5], max = 0;
  int idx;
  scanf("%f %f %f %f", &A, &B, &C, &D);
  seq[1] = A/C + B/D;
  seq[2] = C/D + A/B;
  seq[3] = D/B + C/A;
  seq[4] = B/A + D/C;
  for (int i = 1; i <= 4; i ++){
    if (seq[i] > max){
      idx = i;
      max = seq[i];
    }
  }
  printf("%d\n", idx - 1);
}
