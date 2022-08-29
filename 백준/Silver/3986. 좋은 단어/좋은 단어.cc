#include <cstdio>
#include <stack>
#include <string>
#include <iostream>

using namespace std;

int main(){
  int T; scanf("%d", &T);
  int cnt = 0;
  while ( T-- ){
    stack <char> s;
    string inp; cin >> inp;
    for (int i = 0; i < inp.size(); i++) {
      if ( s.size() == 0){
        s.push(inp[i]);
      }
      else {
        if (s.top() == inp[i]){
          s.pop();
        }
        else {
          s.push(inp[i]);
        }
      }
    }
    if (s.size() == 0) cnt++;
  }
  printf("%d\n", cnt);
}
