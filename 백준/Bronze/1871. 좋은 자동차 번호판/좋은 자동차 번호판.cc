#include <cstdio>
#include <cmath>
#include <stdlib.h>
#include "cstring"
#include "string.h"
#include "iostream"

using namespace std;

int main() {
  int T; scanf("%d", &T);
  while (T--) {
    string inp;
    int first = 0, second = 0;
    cin >> inp;
    for (int i = 0; i < 3; i++) {
      first += (inp[i] - 'A') * pow(26, 2 - i);
    }
    for (int i = 4; i < 8; i++) {
      second += (inp[i] - '0') * pow(10, 7 - i);
    }
    if (abs(first - second) <= 100) {
      printf("%s\n", "nice");
    }
    else {
      printf("%s\n", "not nice");
    }
  }
  return 0;
}
