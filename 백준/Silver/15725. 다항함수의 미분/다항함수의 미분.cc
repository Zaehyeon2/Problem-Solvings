#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string inp, ans = ""; cin >> inp;
  int sizee = inp.size();

  for(int i = 0; i < sizee; i++){
    if(inp[i] == 'x') {
      if(i == 0){
        ans += '1';
      }
      else {
        for(int j = 0; j < i; j++){
          ans += inp[j];
        }
      }
    }
  }
  if(ans == "-") printf("%s\n", "-1");
  else if (ans == "") printf("%s\n", "0");
  else printf("%s\n", ans.c_str());
}
