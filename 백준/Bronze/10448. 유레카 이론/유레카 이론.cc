#include <cstdio>

int ureka[350];

int main() {
  for(int i = 1; i < 50; i++){
    ureka[i] = ureka[i - 1] + i;
  }
  int T; scanf("%d", &T);
  while(T--){
    int n; scanf("%d", &n);
    for(int i = 1; i < 50; i++) {
      for(int j = 1; j < 50; j++) {
        for(int k = 1; k < 50; k++){
          if(ureka[i] + ureka[j] + ureka[k] == n){
            printf("1\n");
            n = 0;
          }
        }
      }
    }
    if(n != 0){
      printf("0\n");
    }
  }
}
