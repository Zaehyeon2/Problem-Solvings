#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  int snail[1000][1000] = {}, N,find,ansi,ansj, i = 0,j = 0, k = 0, A = 0;
  scanf("%d %d", &N, &find);
  int n = N-1, Num = N*N;
  while (1) {
    if (n == 0){
      snail[N/2][N/2] = 1;
      break;
    }
    else {
      if (k == 0){
        snail[i][j] = Num;
        i += 1;
        Num -= 1;
        A += 1;
      }
      else if ( k == 1){
        snail[i][j] = Num;
        j += 1;
        Num -= 1;
        A += 1;
      }
      else if ( k == 2){
        snail[i][j] = Num;
        i -= 1;
        Num -= 1;
        A += 1;
      }
      else if ( k == 3){
        snail[i][j] = Num;
        j -= 1;
        Num -= 1;
        A += 1;
      }
      if (A == n){
        A = 0;
        if (k != 3){
          k += 1;
        }
        else{
          k = 0;
          n -= 2;
          i += 1;
          j += 1;
        }
      }
    }
  }
  for (int i = 0; i < N; i ++){
    for (int j = 0; j < N; j++){
      if (snail[i][j] == find){
        ansi = i + 1;
        ansj = j + 1;
      }
      printf("%d ", snail[i][j]);
    }
    printf("\n");
  }
  printf("%d %d\n", ansi,ansj);
  return 0;
}
