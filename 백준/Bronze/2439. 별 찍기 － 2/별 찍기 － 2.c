#include <stdio.h>

int main(){
  int N;
  scanf("%d", &N);
  for(int jool = 0; jool < N; jool++){
    for(int roop = N - 1; roop > jool ; roop--){
      printf(" ");
    }
    for(int roop = 0; roop < jool + 1; roop++){
      printf("*");
    }
    printf("\n");
  }

}
