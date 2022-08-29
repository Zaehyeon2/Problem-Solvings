#include <stdio.h>

int main() {
  int E, S, M; scanf("%d %d %d", &E, &S, &M);
  int tmpE = 1, tmpS = 1, tmpM = 1;
  int year = 1;
  while(1){
    if (tmpE == E && tmpS == S && tmpM == M){
      printf("%d\n", year);
      break;
    }
    tmpE++; tmpS++; tmpM++; year++;
    if (tmpE == 16) tmpE = 1;
    if (tmpS == 29) tmpS = 1;
    if (tmpM == 20) tmpM = 1;
  }
}
