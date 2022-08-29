#include <cstdio>
#include <iostream>

using namespace std;

int cache[101][101];

int main(){
  int N, M, T;
  cin >> T;
  for (int i = 0; i < 31; i++){
    for (int j = 0; j < 31; j++) {
      cache[i][j] = 0;
    }
  }
  for (int i = 0; i < 31; i++){
    cache[1][i] = i;
  }
  for (int i = 2; i < 31; i++){
    for (int k = i; k < 31; k++){
      for (int l = k-1; l >= i-1; l--) {
        cache[i][k] += cache[i - 1][l];
      }
    }
  }
  for (int i = 0; i < T; i++){
    cin >> N >> M;
    cout << cache[N][M] << endl;
  }
}
