#include <cstdio>
#include <algorithm>
#include <string.h>

using namespace std;

int arr[51][51];
int Max = 0, N, M, Min;

int chk(int y, int x) {
  int sum = 0;
  for(int i = 0; i < 51; i++){
    if (y + i >= N || x + i >= M) break;
    if (arr[y][x] == arr[y][x+i] && arr[y][x+i] == arr[y+i][x+i] && arr[y+i][x+i] == arr[y+i][x]){
      sum = max(sum, (i + 1) * (i + 1));
    }
  }
  return sum;
}

int main() {
  scanf("%d %d", &N, &M);
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      scanf("%1d", &arr[i][j]);
    }
  }
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      Max = max(Max, chk(i, j));
    }
  }
  printf("%d\n", Max);
}
