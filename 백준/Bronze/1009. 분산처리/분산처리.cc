#include <cstdio>

int main() {
  int T; scanf("%d", &T);
  while(T--){
    int a, b; scanf("%d %d", &a, &b);
    int tmp = 1;
    while(b--){
      tmp *= a;
      tmp %= 10;
    }
    if (tmp == 0){
      tmp = 10;
    }
    printf("%d\n", tmp);
  }
}
