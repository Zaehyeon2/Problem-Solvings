#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char ch[101] = {};
  int chlen;
  scanf("%s", ch);
  chlen = strlen(ch);
  for (size_t i = 0; i < chlen; i++) {
    if (ch[i] >= 'a'){
      ch[i] -= 'a' - 'A';
    }
    else {
      ch[i] += 'a' - 'A';
    }
  }
  printf("%s\n", ch);
  return 0;
}
