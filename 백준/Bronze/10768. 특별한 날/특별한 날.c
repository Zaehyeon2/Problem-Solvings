#include <stdio.h>

int main(int argc, char const *argv[]) {
  int M, D;
  scanf("%d %d", &M, &D);
  if (M < 2){
    printf("Before\n");
  }
  else if ( M == 2){
    if (D < 18){
      printf("Before\n");
    }
    else if (D == 18){
      printf("Special\n");
    }
    else {
      printf("After\n");
    }
  }
  else {
    printf("After\n");
  }
  return 0;
}
