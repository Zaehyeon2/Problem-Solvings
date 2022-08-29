#include <cstdio>
#include <string.h>

int s, l, n, w;

int main() {
  char inp;
  while(1){
    inp = getchar();
    if(inp == EOF){
      break;
    }
    if(inp == '\n') {
      printf("%d %d %d %d\n", s, l, n, w);
      s = 0; l = 0; n = 0; w = 0;
    }
    if('a' <= inp && inp <= 'z') s++;
    if('A' <= inp && inp <= 'Z') l++;
    if('0' <= inp && inp <= '9') n++;
    if( inp == ' ') w++;
  }
}
