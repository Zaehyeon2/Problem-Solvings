#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <string.h>

using namespace std;

vector <string> ans;
string inp, tmp;

string stoint(string a){
  int asize = a.size();
  string ret = "";
  int bl = 0;
  for(int i = 0; i < asize; i++){
    if(a[i] != '0') bl = 1;
    if(bl == 1) ret += a[i];
  }

  if(ret == "") ret = "0";
  return ret;
}

int main(int argc, char const *argv[]) {
  int T;
  cin >> T;
  while(T--){
    cin >> inp;
    inp += 'a';
    int inpsize = inp.size();
    for(int i = 0; i < inpsize; i++){
      if('0' <= inp[i] && inp[i] <= '9') {
        tmp += inp[i];
      }
      else {
        if (tmp != "") ans.push_back(stoint(tmp));
        tmp = "";
      }
    }
  }
  int ansize = ans.size();
  sort(ans.begin(), ans.end());
  for(int i = ansize - 1; i >= 0; i--){
    for(int j = i - 1; j >= 0; j--){
      if(ans[i].size() >= ans[j].size()) {
        string btmp = ans[i];
        ans[i] = ans[j];
        ans[j] = btmp;
      }
    }
  }
  for(int i = ansize - 1; i >= 0; i--) printf("%s\n", ans[i].c_str());
  return 0;
}
