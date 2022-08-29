#include <stdio.h>

int N ;

int d(int N){
  int ret = N;
  while (N!=0) {
    ret+=N%10;
    N/=10;
  }
  return ret;
}

int main(int argc, char const *argv[]) {
  int arr[10001] = {};
  for (size_t i = 0; i < 10000; i++) {
    if (d(i) < 10000){
      arr[d(i)] = d(i);
    }
  }
  for (int i = 1; i < 10000; i++) {
    if (arr[i] == 0) {
      printf("%d\n", i);
    }
  }
  return 0;
}
