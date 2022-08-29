#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int main(){
  string inp[51], ans = "";
  int N; scanf("%d\n", &N);
  for(int i = 0; i < N; i++){
    cin >> inp[i];
  }
  int ss = inp[0].size();
  for(int i = 0; i < ss; i++){
    bool bt = 1;
    char tmp = inp[0][i];
    for(int j = 0; j < N; j++){
      if(inp[j][i] != tmp) bt = 0;
    }
    if(bt == 1){
      ans += tmp;
    }
    else ans += '?';
  }
  ans += '\n';
  cout << ans;
}
