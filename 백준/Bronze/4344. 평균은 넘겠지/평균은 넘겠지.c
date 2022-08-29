#include <stdio.h>

int main(){
  float Case;
  float Num = 0;
  float sum;
  float A[1000] = {};
  int PN;
  scanf("%f", &Case);
  for (int C = 0; C < Case; C++){
    scanf("%d", &PN);
    for (int P = 0; P < PN; P++){
      scanf("%f", &A[P]);
      sum += A[P];
    }
      sum = sum / PN;
    for (int i = 0; i < PN; i++){
      if (A[i] > sum){
        Num += 1;
      }
    }
    printf("%.3f%%\n", Num/PN*100);
    sum = 0;
    Num = 0;
  }
}
