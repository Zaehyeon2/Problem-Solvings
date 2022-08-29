#include <stdio.h>

int main(){
  int a;
  int total = 0;
  scanf("%d", &a);
  while ( a != 0 ){
    total += a;
    a -= 1;

  }
  printf("%d\n", total);
}
