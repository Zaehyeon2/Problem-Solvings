#include <cstdio>

int main(){
  int T; scanf("%d", &T);
  while(T--) {
    int candy, sib; scanf("%d %d", &candy, &sib);
    printf("You get %d piece(s) and your dad gets %d piece(s).\n", candy / sib, candy % sib);
  }
}
