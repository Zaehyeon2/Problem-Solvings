#include <cstdio>

int main(){
  int N; scanf("%d", &N);
  N %= 60;
  int A = 9, B = 7, cnt = 1;
  if(N == 0){
    printf("%s\n", "I6");
    return 0;
  }
  while(1){
    if(cnt == N) break;
    A++; B++; cnt++;
    if(A == 12) A = 0;
    if(B == 10) B = 0;
  }
  printf("%c%d\n", 'A' + A, B);
}
