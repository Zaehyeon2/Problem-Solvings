#include <cstdio>

int bae[52][52];
int dir[4][2] = {{1,0},{-1,0},{0,-1},{0,1}};
int cnt, M, N, K;

void bfs(int y, int x);

int main(){
  int T; scanf("%d", &T);
  while(T--){
    cnt = 0;
    scanf("%d %d %d", &M, &N, &K);
    while(K--){
      int y, x; scanf("%d %d", &y, &x);
      bae[y+1][x+1] = 1;
    }
    for (int i = 1; i <= M; i++) {
      for (int j = 1; j <= N; j++) {
        if (bae[i][j] == 1){
          bfs(i, j);
          cnt++;
        }
      }
    }
    printf("%d\n", cnt);
  }
}

void bfs(int y, int x){
   bae[y][x] = 0;
  for (int i = 0; i < 4; i++) {
    int yy = y + dir[i][0], xx = x + dir[i][1];
    if (bae[yy][xx] == 1){
      bfs(yy, xx);
    }
  }
}
