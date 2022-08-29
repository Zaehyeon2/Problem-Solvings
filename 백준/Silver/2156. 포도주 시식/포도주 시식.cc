#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int N, grp[10001], cache[10001][3];

int dp(int n, int s){
  if ( n == N) return 0;
  int& ret = cache[n][s];
  if (ret != -1) return ret;
  ret = dp(n + 1, 0);
  if ( s < 2) ret = max(dp(n + 1, s + 1) + grp[n], ret);
  return ret;
}

int main(){
  memset(cache, -1, sizeof(cache));
  scanf("%d", &N);
  for (int i = 0; i < N; i++) {
    scanf("%d", &grp[i]);
  }
  printf("%d\n", dp(0, 0));
}
