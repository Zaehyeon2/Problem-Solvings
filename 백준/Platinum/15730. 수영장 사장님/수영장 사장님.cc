#include <cstdio>
#include <cstring>

int N, M;
int dir[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

int arr[104][104];
int chk[104][104];

void dfs(int y, int x){
  chk[y][x] = 0;
  for(int i = 0; i < 4; i++){
    int xx = x + dir[i][0]; int yy = y + dir[i][1];
    if(yy < 0 || yy >= N || xx < 0 || xx >= M) continue;
    if(chk[yy][xx] == 1){
      dfs(yy, xx);
    }
  }
}

void set(int a){
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      if(a - arr[i][j] > 0) chk[i][j] = 1;
      else chk[i][j] = 0;
    }
  }
}

int foo(int a){
  int sum = 0;
  set(a);
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      if ((i == 0 || j == 0 || i == N-1 || j == M-1) && (chk[i][j] == 1)) dfs(i, j);
    }
  }
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      if (chk[i][j] == 1) sum++;
    }
  }
  return sum;
}

int main() {
  int sum = 0;
  scanf("%d%d", &N, &M);
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M;j ++){
      scanf("%d", &arr[i][j]);
    }
  }
  for(int i = 0; i <= 10000; i++){
    int tmp = foo(i);
    sum += tmp;
  }
  printf("%d\n", sum);
}
