#include <stdio.h>

int main(int argc, char const *argv[]) {
  int arr[1001] = {};
  int N;
  scanf("%d", &N);
  for (size_t i = 0; i < N; i++) {
    scanf("%d",&arr[i]);
  }
  for (size_t i = 0; i < N; i++) {
    for (size_t j = i+1; j < N; j++) {
      if (arr[i] > arr[j]){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  for (size_t i = 0; i < N; i++) {
    printf("%d\n", arr[i]);
  }
  return 0;
}
