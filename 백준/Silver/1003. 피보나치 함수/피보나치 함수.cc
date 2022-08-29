#include <cstdio>

int fib[41][2];

int main(){
  int T; scanf("%d", &T);
  fib[0][0] = 1; fib[0][1] = 0; fib[1][0] = 0; fib[1][1] = 1;
  for(int i = 2; i < 41; i++){
    fib[i][0] = fib[i-1][0] + fib[i-2][0];
    fib[i][1] = fib[i-1][1] + fib[i-2][1];
  }
  while(T--){
    int tmp; scanf("%d", &tmp);
    printf("%d %d\n", fib[tmp][0], fib[tmp][1]);
  }
}
