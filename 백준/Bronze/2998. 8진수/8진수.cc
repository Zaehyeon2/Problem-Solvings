#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int main(){
  string S, ans = "", tmp = ""; cin >> S;
  int len = S.size();
  if (len % 3 == 0){
    len = 0;
  }
  else {
    len = 3 - len % 3;
  }
  for (int i = 0; i < len; i ++){
    tmp = '0' + S;
    S = tmp;
  }
  tmp = "";
  len = S.size();
  for (int i = 0; i < len; i++) {
    if ( i % 3 != 2){
      tmp += S[i];
    }
    else {
      tmp += S[i];
      if (tmp.compare("000") == 0) ans += '0';
      if (tmp.compare("001") == 0) ans += '1';
      if (tmp.compare("010") == 0) ans += '2';
      if (tmp.compare("011") == 0) ans += '3';
      if (tmp.compare("100") == 0) ans += '4';
      if (tmp.compare("101") == 0) ans += '5';
      if (tmp.compare("110") == 0) ans += '6';
      if (tmp.compare("111") == 0) ans += '7';
      tmp = "";
    }
  }
  printf("%s\n", ans.c_str());
}
