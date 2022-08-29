#include "stdio.h"
#include <string.h>

int main(int argc, char const *argv[]) {
  int arr[301][301] = {};
  int y, x;
  scanf("%d %d", &y, &x);
  for (int i = 0; i < y; i++) {
    for (int j = 0; j < x; j++) {
      scanf("%d", &arr[i][j]);
    }
  }
  int K;
  scanf("%d", &K);
  for (int i = 0; i < K; i++) {
    int y1,x1,y2,x2,sum = 0;
    scanf("%d %d %d %d", &y1, &x1, &y2, &x2);
    for (int j = y1-1; j < y2; j++) {
      for (int k = x1-1; k < x2; k++) {
        sum += arr[j][k];
      }
    }
    printf("%d\n", sum);
  }
  return 0;
}
