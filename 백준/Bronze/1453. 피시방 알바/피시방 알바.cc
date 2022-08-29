#include <cstdio>

bool arr[101];
int ans;

int main() {
  int N; scanf("%d\n", &N);
  for(int i = 0; i < N; i++){
    int tmp; scanf("%d", &tmp);
    if(arr[tmp] == 0){
      arr[tmp] = 1;
    }
    else{
      ans++;
    }
  }
  printf("%d\n", ans);
}
