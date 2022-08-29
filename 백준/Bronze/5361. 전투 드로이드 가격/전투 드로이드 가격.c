#include <stdio.h>

int main(int argc, char const *argv[]) {
  int N;
  scanf("%d", &N);
  for (size_t i = 0; i < N; i++) {
    float sum = 0;
    for (int j = 0; j < 5; j++) {
      int Num;
      scanf("%d", &Num);
      if ( j == 0){
        sum += Num * 350.34;
      }
      else if (j == 1){
        sum += Num * 230.90;
      }
      else if (j == 2){
        sum += Num * 190.55;
      }
      else if (j == 3){
        sum += Num * 125.30;
      }
      else if (j == 4){
        sum += Num * 180.90;
      }
    }
    printf("$%.2f\n",sum );
  }
  return 0;
}
