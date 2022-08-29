#include <cstdio>

bool chk[251][251];
int hsm[251][251];

int dir[8][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};

int M, N;
int sum;

int dfs(int y, int x){
  chk[y][x] = 1;
  for(int i = 0; i < 8; i++) {
    int yy = y + dir[i][0]; int xx = x + dir[i][1];
    if( yy < 0 || yy >= M || xx < 0 || xx >= N) continue;
    if(hsm[yy][xx] == 1 && chk[yy][xx] == 0){
      dfs(yy, xx);
    }
  }
  return 1;
}

int main() {
  scanf("%d%d", &M, &N);
  for(int i = 0; i < M; i++){
    for(int j = 0; j < N; j++){
      scanf("%d", &hsm[i][j]);
    }
  }
  for(int i = 0; i < M; i++){
    for(int j = 0; j < N; j++){
      if(hsm[i][j] == 1 && chk[i][j] == 0) sum += dfs(i, j);
    }
  }
  printf("%d\n", sum);
}
