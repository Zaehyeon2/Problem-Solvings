#include <stdio.h>

int main (){
  int a, b, T ;
  int count = 0 ;
  scanf("%d", &T) ;
  while ( count++ < T){
    scanf("%d %d", &a, &b) ;
    printf("%d\n", a+b);
  }
  return 0 ;
}
