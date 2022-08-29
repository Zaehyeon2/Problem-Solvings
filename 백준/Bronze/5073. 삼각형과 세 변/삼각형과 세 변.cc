#include <algorithm>
#include <stdio.h>

using namespace std;

int inp[4];

int main() {
  while(1){
    scanf("%d %d %d", &inp[0], &inp[1], &inp[2]);
    if (inp[0] == 0 && inp[1] == 0 && inp[2] == 0) break;
    sort(inp, inp+3);
    if (inp[2] >= inp[0] + inp[1]) printf("Invalid\n");
    else if (inp[0] == inp[1] && inp[1] == inp[2]) printf("%s\n", "Equilateral");
    else if (inp[0] == inp[1] || inp[1] == inp[2]) printf("%s\n", "Isosceles");
    else printf("%s\n", "Scalene");
  }
}
