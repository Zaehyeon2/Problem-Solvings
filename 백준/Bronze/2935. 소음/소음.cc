#include <cstdio>
#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main() {
  string A, B;
  char M;
  cin >> A >> M >> B;
  if ( M == '*'){
    for (int i = 0; i < B.size() - 1; i++) {
      A += '0';
    }
    printf("%s\n", A.c_str());
  }
  else {
    if (A.size() >= B.size()){
      A[A.size() - B.size()] += 1;
      printf("%s\n", A.c_str());
    }
    else {
      B[B.size() - A.size()] += 1;
      printf("%s\n", B.c_str());
    }
  }
}
