#include "stdio.h"
#include <string.h>

int main(int argc, char const *argv[]) {
  int square[4][4] = {},square_num = 0, pos[101][101] = {};
  for (int i = 0; i < 4; i++){
    scanf("%d %d %d %d", &square[i][0], &square[i][1], &square[i][2], &square[i][3]);
  }
  for (int i = 0; i < 4; i++){
    for ( int j = square[i][0]; j < square[i][2]; j++){
      for (int k = square[i][1]; k < square[i][3]; k++){
        pos[j][k] = 1;
      }
    }
  }
  for ( int i = 0; i < 101; i++){
    for (int j = 0; j < 101; j++){
      if (pos[i][j] == 1){
        square_num += 1;
      }
    }
  }
  printf("%d\n", square_num);
  return 0;
}
