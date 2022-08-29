#include <stdio.h>

int main() {
  int r, w, l;
  int count = 00;
  while (1){
    count++;
    scanf("%d", &r);
    if (r != 0){
      scanf("%d %d", &w, &l);
			if (4*r*r >= (w*w + l*l)){
        printf("Pizza %d fits on the table.\n", count);
      }
      else if (r*r*4 < (w*w + l*l)){
        printf("Pizza %d does not fit on the table.\n", count);
      }
      }
    else {
      break;
    }
    }
  }

