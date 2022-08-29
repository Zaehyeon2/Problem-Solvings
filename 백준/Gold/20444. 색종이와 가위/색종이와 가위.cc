#include <bits/stdc++.h>

using namespace std;

int main(){

  long long N,K;
  cin >> N >> K;
  long long x = (N + sqrt(N * N - 4 * (K - N - 1))) / 2;
  long long y = (N - sqrt(N * N - 4 * (K - N - 1))) / 2;
  if(x >= 0 && y >= 0 && x + y == N && x * y == K - N - 1) {
      cout << "YES\n";
  }
  else {
      cout << "NO\n";
  }
}