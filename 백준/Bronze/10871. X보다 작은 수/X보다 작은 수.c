#include <stdio.h>

int main(){
  int N, X, Num;
  int i = 0;
  scanf("%d %d", &N, &X);
  int Out[10000] = {};
  for (int roop = 0; roop < N; roop++){
    scanf("%d", &Num);
    if (X > Num){
      Out[i] = Num;
      i += 1;
    }
  }
  for (int roop = 0; roop < i; roop++){
    printf("%d ", Out[roop]);
  }
}
