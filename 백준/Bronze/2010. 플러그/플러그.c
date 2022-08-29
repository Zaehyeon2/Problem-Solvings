#include <stdio.h>

int main(){
  int Com_n = 0 ;
  int Number, a;
  scanf("%d", &Number);
  while (Number > 0){
    scanf("%d", &a);
    Com_n += (a - 1);
    Number -= 1;
  }
  printf("%d\n", Com_n + 1);
}
