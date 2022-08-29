#include <stdio.h>

int main(){
  int Cost_A, Oil;
  int Cost_B, Basic_B, Limit_B, Plus_B;
  scanf("%d", &Cost_A);
  scanf("%d %d %d", &Basic_B,&Limit_B,&Plus_B);
  scanf("%d", &Oil);
  Cost_A *= Oil;
  if (Oil - Limit_B >= 0){
    Cost_B = Basic_B + ((Oil - Limit_B) * Plus_B);
  }
  else {
    Cost_B = Basic_B;
  }
  if (Cost_B > Cost_A){
    printf("%d\n", Cost_A);
  }
  else if (Cost_B <= Cost_A) {
    printf("%d\n", Cost_B);
  }
}
