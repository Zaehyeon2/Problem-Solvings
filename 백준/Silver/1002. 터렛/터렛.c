#include <stdio.h>

int main(int argc, char const *argv[]) {
  int N;
  scanf("%d", &N);
  for (size_t i = 0; i < N; i++) {
    int x1,y1,r1,x2,y2,r2,dit1,dit2,dit3;
    scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
    dit1 = (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2); //두점 사이 거리
    dit2 = (r1 + r2)*(r1 + r2);
		dit3 = (r1 - r2)*(r1 - r2);
    if (dit1 == 0){
      if (dit3 == 0){
        printf("-1\n");
      }
      else {
        printf("0\n");
      }
    }
    else {
      if ( dit2 < dit1){
        printf("0\n");
      }
      else if (dit2 == dit1){
        printf("1\n");
      }
      else if (dit2 > dit1 && dit1 > dit3){
        printf("2\n");
      }
      else if (dit3 == dit1){
        printf("1\n");
      }
      else if ( dit3 > dit1){
        printf("0\n");
      }
    }
  }
  return 0;
}
