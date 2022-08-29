#include "stdio.h"

int main(int argc, char const *argv[]) {
  int T;
  scanf("%d", &T);
  for (size_t i = 0; i < T; i++) {
    int Ysum = 0, Ksum = 0;
    for (size_t j = 0; j < 9; j++) {
      int Ys = 0, Ks = 0;
      scanf("%d %d", &Ys, &Ks);
      Ysum += Ys;
      Ksum += Ks;
    }
    if (Ysum > Ksum){
      printf("Yonsei\n");
    }
    else if (Ksum > Ysum){
      printf("Korea\n");
    }
    else {
      printf("Draw\n");
    }
  }
  return 0;
}
