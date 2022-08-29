#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

char arr[51][51];

int foo(int y, int x){
  int ans = 0;
  for(int i = y; i < y + 8; i++){
    for(int j = x; j < x + 8; j++){
      if((i + j) % 2 == 0 && arr[i][j] != 'W'){
        ans++;
      }
      if((i + j) % 2 == 1 && arr[i][j] != 'B'){
        ans++;
      }
    }
  }
  int ans2 = 0;
  for(int i = y; i < y + 8; i++){
    for(int j = x; j < x + 8; j++){
        if((i + j) % 2 == 0 && arr[i][j] != 'B'){
          ans2++;
        }
        if((i + j) % 2 == 1 && arr[i][j] != 'W'){
          ans2++;
        }
      }
    }
  return min(ans, ans2);
}

int main() {
 int N, M; scanf("%d %d\n", &N, &M);
 int Min = 100;
 for (int i = 0; i < N; i++){
   cin >> arr[i];
 }
 for(int i = 0; i <= N - 8; i++){
   for(int j = 0; j <= M - 8; j++){
     int tmp = foo(i, j);
     Min = min(Min, tmp);
   }
 }
 printf("%d\n", Min);
}
