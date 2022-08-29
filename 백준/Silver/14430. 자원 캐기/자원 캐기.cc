#include <cstdio>
#include <algorithm>

using namespace std;

int arr[301][301];

int main() {
  int N, M; scanf("%d %d", &N, &M);
  for (int i = 0; i < N; i++){
    for (int j = 0; j < M; j++){
      scanf("%d", &arr[i][j]);
    }
  }
  for(int i = 1; i < N; i++){
    arr[i][0] += arr[i-1][0];
  }
  for(int i = 1; i < M; i++){
    arr[0][i] += arr[0][i-1];
  }
  for(int i = 1; i < N; i++){
    for(int j = 1; j < M; j++){
      arr[i][j] = max(arr[i-1][j] + arr[i][j], arr[i][j-1] + arr[i][j]);
    }
  }
  printf("%d\n", arr[N-1][M-1]);
}
