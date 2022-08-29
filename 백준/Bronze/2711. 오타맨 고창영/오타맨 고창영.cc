#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){
  int T; scanf("%d", &T);
  while(T--){
    int pos;
    char inp[90];
    cin >> pos >> inp;
    int len = strlen(inp);
    for(int i = 0; i < len; i++){
      if (i + 1 == pos) {
        continue;
      }
      printf("%c", inp[i]);
    }
    printf("%s\n", "");
  }
}
