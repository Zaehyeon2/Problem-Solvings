#include <stdio.h>

int main(){
  int N;
  char A = '*';
  scanf("%d", &N);
  for(int jool = 0; jool < N; jool++){
    for(int roop = jool; roop < N; roop++){
      printf("*");
    }
    printf("\n");
  }

}
