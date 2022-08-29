#include <cstdio>

char puz[21][21];
char inp[11][11];

int main(){
  int M, N, U, L, R, D;
  scanf("%d%d%d%d%d%d", &M, &N, &U, &L, &R, &D);
  for(int i = 0; i < M; i++){
    scanf("%s", inp[i]);
  }
  for(int i = 0; i < M + U + D; i++){
    for(int j = 0; j < N + L + R; j++){
      if(L <= j && j < N + L && U <= i && i < U + M){
        puz[i][j] = inp[i-U][j-L];
      }
      else{
        if((i + j) % 2 == 0) puz[i][j] = '#';
        else puz[i][j] = '.';
      }
    }
  }
  for(int i = 0; i < M + U + D; i++){
    printf("%s\n", puz[i]);
  }
}
