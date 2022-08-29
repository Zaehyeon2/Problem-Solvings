#include <cstdio>
#include <algorithm>

int arr[1002];

using namespace std;

int main() {
  int N, L, con = 0, cnt = 0; scanf("%d %d", &N, &L);
  for (int i = 0; i < N; i++) {
    scanf("%d", &arr[i]);
  }
  arr[N] = 10000001;
  sort(arr, arr + N);
  for (int i = 0; i < N; i ++) {
    if(con < L && arr[i + 1] - arr[i] < L - con) {
      con += arr[i + 1] - arr[i];
    }
    else {
      cnt++;
      con = 0;
    }
  }
  printf("%d\n", cnt);
}
