#include <string>
#include <iostream>
#include <cstdio>
#include <string.h>
#include <algorithm>

using namespace std;

string ans;
int len;

bool chk(string s) {
  for(int i = 0; i < len / 2; i++){
    if(ans[i] != ans[len-i-1]){
      return false;
    }
  }
  return true;
}

int main(){
  string one = "", two = "", middle = "";
  char name[51] = {}; cin >> name;
  len = strlen(name);
  sort(name, name + len);
  for (int i = 0; i < len; i++){
    if(name[i] == name[i+1]){
      one += name[i];
      two = name[i+1] + two;
      i++;
    }
    else {
      middle += name[i];
    }
  }
  ans = one + middle + two;
  if (chk(ans) == 1){
   cout << ans << '\n';
  }
  else {
    printf("%s\n", "I'm Sorry Hansoo");
  }
}
