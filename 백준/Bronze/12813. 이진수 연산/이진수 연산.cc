#include <cstdio>
#include <string>
#include <iostream>

using namespace std;
char AND[100001], OR[100001], NOTA[100001], NOTB[100001], XOR[100001];

int main(){
  string A, B;
  cin >> A >> B;

  for(int i = 0; i < 100000; i++){
    if (A[i] == '1' && B[i] == '1'){
      AND[i] = '1';
    }
    else {
      AND[i] = '0';
    }
  }

  for(int i = 0; i < 100000; i++){
    if (A[i] == '1' || B[i] == '1'){
      OR[i] = '1';
    }
    else {
      OR[i] = '0';
    }
  }

  for(int i = 0; i < 100000; i++){
    if (A[i] != B[i]){
      XOR[i] = '1';
    }
    else {
      XOR[i] = '0';
    }
  }

  for(int i = 0; i < 100000; i++){
    if (A[i] == '1'){
      NOTA[i] = '0';
    }
    else {
      NOTA[i] = '1';
    }
  }

  for(int i = 0; i < 100000; i++){
    if (B[i] == '1'){
      NOTB[i] = '0';
    }
    else {
      NOTB[i] = '1';
    }
  }

  cout << AND << '\n' << OR << '\n' << XOR << '\n' << NOTA << '\n' << NOTB << '\n';
}
