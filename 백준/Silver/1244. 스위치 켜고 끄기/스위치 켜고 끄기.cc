#include <cstdio>

int swi[102];

int main() {
  int T; scanf("%d", &T);
  int sex, num;
  for (int i = 1; i <= T; i++){
    scanf("%d", &swi[i]);
  }
  int T2; scanf("%d", &T2);
  while(T2--){
    scanf("%d %d", &sex, &num);
    if (sex == 1){
      for (int i = 1; i <= T; i++){
        if (i % num == 0)
          swi[i] = !swi[i];
      }
    }
    else {
      swi[num] = !swi[num];
      for (int i = 1; ; i++){
        if (num - i < 1 || num + i > T){
          break;
        }
        if (swi[num -  i] == swi[num + i]){
          swi[num-i] = !swi[num-i];
          swi[num+i] = !swi[num+i];
        }
        else break;
      }
    }
  }
  for ( int i = 1; i <= T; i++){
    if (i % 20 == 0) printf("%d\n", swi[i]);
    else printf("%d ", swi[i]);
  }
  printf("\n");
}
