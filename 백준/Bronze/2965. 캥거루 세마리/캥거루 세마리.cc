#include <cstdio>

int main(){
  int A, B, C; scanf("%d %d %d", &A, &B, &C);
  int cnt = 0;
  while(1) {
    if ( A + 1 == B && B + 1 == C) {
      break;
    }
    if ( C - B > B - A) {
      A = B;
      B = C - 1;
    }
    else {
      C = B;
      B = C - 1;
    }
    cnt++;
  }
  printf("%d\n", cnt);
}
