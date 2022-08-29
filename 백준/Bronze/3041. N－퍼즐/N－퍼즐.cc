#include <cstdio>

char puzzle[4][4];
char ans[4][4] = {{'A', 'B', 'C', 'D'}, {'E', 'F', 'G', 'H'}, {'I', 'J', 'K', 'L'}, {'M', 'N', 'O', '.'}};
int sum;

int abs(int a){
  if(a < 0) return -a;
  return a;
}

int main() {
  for(int i = 0; i < 4; i++){
    scanf("%s", puzzle[i]);
  }
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
      for(int k = 0; k < 4; k++){
        for(int l = 0; l < 4; l++){
          if(puzzle[i][j] == ans[k][l] && puzzle[i][j] != '.'){
            sum += abs(i - k) + abs(j - l);
          }
        }
      }
    }
  }
  printf("%d\n", sum);
}
