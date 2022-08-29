#include <stdio.h>

int main(int argc, char const *argv[]) {
  int Max = -1000000, Min = 1000000, N;
  scanf("%d", &N);
  for (size_t i = 0; i < N; i++) {
    int input;
    scanf("%d", &input);
    if (input > Max){
      Max = input;
    }
    if (input < Min) {
      Min = input;
    }
  }
  printf("%d %d\n", Min, Max);
  return 0;
}
