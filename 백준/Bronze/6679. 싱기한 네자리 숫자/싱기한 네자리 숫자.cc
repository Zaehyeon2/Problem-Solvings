#include "cstdio"
#include <string>
#include <iostream>

using namespace std;

int zin12(int n){
  int ans = 0;
  while(n){
    ans += n % 12;
    n /= 12;
  }
  return ans;
}

int zin16(int n){
  int ans = 0;
  while(n){
    ans += n % 16;
    n /= 16;
  }
  return ans;
}

int zin10(int n){
  int ans = 0;
  while(n){
    ans += n % 10;
    n /= 10;
  }
  return ans;
}

int main() {
  for(int i = 1000; i <= 9999; i++){
    if(zin10(i) == zin16(i) && zin10(i) == zin12(i)) printf("%d\n", i);
  }
}
