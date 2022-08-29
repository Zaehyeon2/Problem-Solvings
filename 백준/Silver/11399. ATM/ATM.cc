#include <cstdio>
#include <algorithm>

using namespace std;

int arr[1001];

int main() {
  int N; scanf("%d\n", &N);
  for(int i = 0; i < N; i++) {
    scanf("%d", &arr[i]);
  }
  sort(arr, arr + N);
  int sum1 = 0, sum2 = 0;
  for(int i = 0; i < N; i++) {
    sum1 += arr[i];
    sum2 += sum1;
  }
  printf("%d\n", sum2);
}
