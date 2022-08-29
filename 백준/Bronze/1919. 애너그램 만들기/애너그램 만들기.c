#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char inp1[1001] = {}, inp2[1001] = {};
  int ana1[1000] = {}, ana2[1000] = {}, sum = 0,inp1len,inp2len;
  scanf("%s %s", inp1, inp2);
  inp1len = strlen(inp1);
  inp2len = strlen(inp2);
  for (int i = 0; i < inp1len; i++){
    ana1[inp1[i]] += 1;
  }
  for (int i = 0; i < inp2len; i++){
    ana2[inp2[i]] += 1;
  }
  for (int i = 'a'; i <= 'z'; i ++){
    if (ana1[i] <= ana2[i]) {
      sum += ana1[i];
    }
    else {
      sum += ana2[i];
    }
  }
  printf("%d\n", inp1len + inp2len - 2*sum);
  return 0;
}
