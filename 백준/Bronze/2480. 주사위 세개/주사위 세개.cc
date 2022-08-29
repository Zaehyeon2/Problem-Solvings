#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
  int inp[3];
  int ans;
  scanf("%d %d %d", &inp[0], &inp[1], &inp[2]);
  sort(inp, inp+3);
  if (inp[0] == inp[1] && inp[1] == inp[2]){
    ans = 10000 + inp[0] * 1000;
  }
  else if (inp[0] == inp[1]){
    ans = 1000 + inp[0] * 100;
  }
  else if (inp[1] == inp[2]){
    ans = 1000 + inp[1] * 100;
  }
  else {
    ans = inp[2] * 100;
  }
  printf("%d\n", ans);
}
