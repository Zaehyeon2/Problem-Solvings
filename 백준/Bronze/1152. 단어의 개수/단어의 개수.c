#include <string.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  char inp[1000001] = {};
  int inplen, sum = 0;
  gets(inp);
  inplen = strlen(inp);
  for (size_t i = 0; i < inplen-1; i++) {
    if (inp[i] == ' ' && inp[i+1] != ' '){
      sum += 1;
    }
  }
  if (inp[0] != ' '){
    sum += 1;
  }
  printf("%d\n", sum);
  return 0;
}
