#include <cstdio>
#include <iostream>

using namespace std;

char arr[51][51];
bool y[51], x[51];
int ans;

int main(){
  int N, M; scanf("%d %d", &N, &M);

  for(int i = 0; i < N; i++){
    cin >> arr[i];
  }

  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      if(arr[i][j] == 'X'){
        y[i] = 1; x[j] = 1;
      }
    }
  }

  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      if(y[i] == 0 && x[j] == 0){
        arr[i][j] = 'X';
        y[i] = 1; x[j] = 1;
        ans++;
      }
    }
  }

  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      if(y[i] == 0){
        arr[i][j] = 'X';
        y[i] = 1; x[j] = 1;
        ans++;
      }
    }
  }

  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      if(x[j] == 0){
        arr[i][j] = 'X';
        y[i] = 1; x[j] = 1;
        ans++;
      }
    }
  }

  printf("%d\n", ans);
}
