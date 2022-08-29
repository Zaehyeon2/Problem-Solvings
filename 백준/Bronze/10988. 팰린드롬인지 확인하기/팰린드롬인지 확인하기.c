#include <stdio.h>
#include "string.h"

int main(int argc, char const *argv[]) {
  char Inp[101] = {};
  char rev[101] = {};
  int Inplen;
  scanf("%s", Inp);
  Inplen = strlen(Inp);
  for (size_t i = 0; i < Inplen; i++) {
    rev[i] = Inp[Inplen - i -1];
  }
  if (strcmp(Inp,rev) == 0){
    return printf("1\n");;
  }
  printf("0\n");
  return 0;
}
