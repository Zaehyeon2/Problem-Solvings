#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
  char seq[51]; cin >> seq;
  int len = strlen(seq);
  bool cup[3] = {1, 0, 0};
  for(int i = 0; i < len; i ++) {
    if (seq[i] == 'A'){
      bool tmp = cup[0];
      cup[0] = cup[1];
      cup[1] = tmp;
    }
    else if (seq[i] == 'B'){
      bool tmp = cup[1];
      cup[1] = cup[2];
      cup[2] = tmp;
    }
    else {
      bool tmp = cup[0];
      cup[0] = cup[2];
      cup[2] = tmp;
    }
  }
  for(int i = 0; i < 3; i++){
    if (cup[i] == 1){
      printf("%d\n", i+1);
    }
  }
}
