#include <stdio.h>

int main(int argc, char const *argv[]) {
  int T, Q1 = 0, Q2 = 0, Q3 = 0, Q4 = 0, Axis = 0;
  scanf("%d", &T);
  for (size_t i = 0; i < T; i++) {
    int X, Y;
    scanf("%d %d", &X, &Y);
    if (X == 0 || Y == 0) {
      Axis += 1;
    }
    if (X > 0 && Y > 0) {
      Q1 += 1;
    }
    if (X > 0 && Y < 0) {
      Q4 += 1;
    }
    if (X < 0 && Y < 0){
      Q3 += 1;
    }
    if (X < 0 && Y > 0) {
      Q2 += 1;
    }
  }
  printf("Q1: %d\n", Q1);
  printf("Q2: %d\n", Q2);
  printf("Q3: %d\n", Q3);
  printf("Q4: %d\n", Q4);
  printf("AXIS: %d\n", Axis);
  return 0;
}
