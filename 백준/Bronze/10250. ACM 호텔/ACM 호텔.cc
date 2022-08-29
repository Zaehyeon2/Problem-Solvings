#include <cstdio>

int main(){
  int T; scanf("%d", &T);
  while ( T-- ){
    int H, W, N; scanf("%d %d %d", &H, &W, &N);
    int tmp = N, cnt = 1;
    while ( tmp > H){
      tmp -= H;
      cnt++;
    }
    printf("%1d%02d\n", tmp, cnt);
  }
}
