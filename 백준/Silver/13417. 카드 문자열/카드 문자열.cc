#include "cstdio"
#include <cstring>
#include <string>
#include <iostream>

using namespace std;

int main() {
  int T; scanf("%d", &T);
  while(T--) {
    string str = "";
    int N; scanf("%d", &N);
    for (int i = 0; i < N; i++) {
      char tmp; cin >> tmp;
      if (i == 0) str += tmp;
      else {
        if(tmp <= str[0]) str = tmp + str;
        else str += tmp;
      }
    }
    printf("%s\n", str.c_str());
  }
}
