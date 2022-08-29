#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  int R, C, ZR, ZC;
  char arr[51][51];
  scanf("%d %d %d %d", &R, &C, &ZR, &ZC);
  for (int i = 0; i < R; i++) {
    scanf("%s", arr[i]);
  }
  for (int i = 0; i < R; i++) {
    for (int in = 0; in < ZR; in++) {
      for (int j = 0; j < C; j++) {
        for (size_t jn = 0; jn < ZC; jn++) {
          printf("%c", arr[i][j]);
        }
      }
      printf("\n");
    }
  }
  return 0;
}
