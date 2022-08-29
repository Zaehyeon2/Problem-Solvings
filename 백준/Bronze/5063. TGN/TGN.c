#include <stdio.h>

int main(int argc, char const *argv[]) {
  int T;
  scanf("%d", &T);
  for (size_t i = 0; i < T; i++) {
    int r,e,c;
    scanf("%d %d %d", &r, &e, &c);
    if (r + c < e) {
      printf("advertise\n");
    }
    else if ( r + c > e){
      printf("do not advertise\n");
    }
    else{
      printf("does not matter\n");
    }

  }
  return 0;
}
