#include <cstdio>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

int arr[200];

int main() {
  string inp; cin >> inp;
  int s = inp.size();
  int mn = 1, midx = 0, m = 0;
  for(int i = 0; i < s; i++){
    if (inp[i] >= 'a') arr[inp[i] - ('a' - 'A')]++;
    else arr[inp[i]]++;
  }
  for(int i = 'A'; i <= 'Z'; i++){
    if(arr[i] > m) {
      m = arr[i]; mn = 1; midx = i;
    }
    else if (arr[i] == m) mn++;
  }
  if(mn == 1) printf("%c\n", midx);
  else printf("?\n");
}
