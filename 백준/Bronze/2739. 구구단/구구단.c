#include <stdio.h>

int main(){
  int a;
  int count = 1;
  scanf("%d", &a);
  while (count < 10){
    printf("%d * %d = %d\n", a, count, a * count);
    count += 1;
  }
}
