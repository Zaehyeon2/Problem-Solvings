#include <stdio.h>

int main(){
  int A_win = 0;
  int B_win = 0;
  int A_s, B_s, Test_n;
  scanf("%d", &Test_n);
  while (Test_n-- > 0){
    scanf("%d %d", &A_s, &B_s );
    if (A_s > B_s){
      A_win += 1;
    }
    else if (A_s < B_s){
      B_win += 1;
    }
  }
  printf("%d %d\n", A_win, B_win);
}
