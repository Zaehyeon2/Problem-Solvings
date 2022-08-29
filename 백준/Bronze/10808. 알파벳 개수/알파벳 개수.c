#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char inp[101] = {};
  int num[1000] = {},inplen;
  scanf("%s", inp);
  inplen = strlen(inp);
  for (int i = 0;i < strlen(inp);i++){
    num[inp[i]] += 1;
  }
  for (int i = 'a';i <= 'z'; i ++){
    printf("%d ", num[i]);
  }
  return 0;
}
