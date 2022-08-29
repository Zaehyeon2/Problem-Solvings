#include <stdio.h>

int main(){
  int a;
  int b = 1;
  scanf("%d", &a);
  while (b != ( a + 1 )){
    printf("%d\n", b);
    b += 1;
  }
}
