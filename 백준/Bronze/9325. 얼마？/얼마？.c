#include <stdio.h>

int main(){
  int price, test, a, b, option;
  int total = 0;
  scanf("%d", &test);
  while ( test != 0){
    scanf("%d", &price);
    total += price;
    scanf("%d", &option);
    while (option != 0){
      scanf("%d %d", &a, &b );
      total += (a * b);
      option -= 1;
    }
    test -= 1;
    printf("%d\n", total);
    total = 0 ;
  }
}
