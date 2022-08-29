#include <cstdio>
#include <string>
#include "cstring"
#include <iostream>

using namespace std;

double ans;

int main(){
  char A[10001], B[10001];
  cin >> A >> B;
  int lenA = strlen(A), lenB = strlen(B);
  for(int i = 0; i < lenA; i++){
    for(int j = 0; j < lenB; j++){
      ans += (A[i] - '0') * (B[j] - '0');
    }
  }
  printf("%1.lf\n", ans);
}
