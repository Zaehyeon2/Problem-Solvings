#include <stdio.h>

int main(int argc, char const *argv[]) {
  int N, arr[1001] = {}, Max = 0, sum = 0;
  scanf("%d", &N);
  for (size_t i = 0; i < N; i++) {
    scanf("%d", &arr[i]);
  }
  for (size_t i = 0; i < N; i++) {
    if (arr[i+1] > arr[i]) {
      sum += arr[i+1] - arr[i];
    }
    else {
      if (sum > Max){
        Max = sum;
      }
    sum = 0;
    }
  }
  printf("%d\n", Max);
  return 0;
}
