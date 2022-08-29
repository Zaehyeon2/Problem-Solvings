#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
  int N, M; scanf("%d%d", &N, &M);
  int MaxN = 0, MaxM = 0;
  while(N--){
    int tmp; scanf("%d", &tmp);
    MaxN = max(MaxN, tmp);
  }
  while(M--){
    int tmp; scanf("%d", &tmp);
    MaxM = max(MaxM, tmp);

  }
  printf("%d\n", MaxN + MaxM);
}
