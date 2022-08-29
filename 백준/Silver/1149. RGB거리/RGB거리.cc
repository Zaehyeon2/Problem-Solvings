#include <cstdio>
#include <algorithm>

using namespace std;

int mat[1001][3];

int Max3(int a, int b, int c) {
  return min(a, min(b, c));
}

int main() {
  int N; scanf("%d", &N);
  for ( int i = 0; i < N; i++) {
    scanf("%d %d %d", &mat[i][0], &mat[i][1], &mat[i][2]);
  }
  for ( int i = 1; i < N; i++) {
    mat[i][0] = min(mat[i-1][1] + mat[i][0], mat[i-1][2] + mat[i][0]);
    mat[i][1] = min(mat[i-1][0] + mat[i][1], mat[i-1][2] + mat[i][1]);
    mat[i][2] = min(mat[i-1][0] + mat[i][2], mat[i-1][1] + mat[i][2]);
  }
  printf("%d\n", Max3(mat[N-1][0], mat[N-1][1], mat[N-1][2]));
}
