#include <stdio.h>

int main() {
  int Test_n, Number, N_n;
  int Total = 0;
  scanf("%d", &Test_n);
  while (Test_n-- > 0) {
    scanf("%d", &N_n);
    Total = 0;
    while (N_n-- >0){
      scanf("%d", &Number);
      Total += Number;
    }
  printf("%d\n",Total );
  }
}
