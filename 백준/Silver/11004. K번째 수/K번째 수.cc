#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

vector <int> v;

int main() {
  int N, K; scanf("%d %d", &N, &K);
  for(int i = 0; i < N; i++){
    int tmp; scanf("%d", &tmp); v.push_back(tmp);
  }
  sort(v.begin(), v.end());
  printf("%d\n", v[K-1]);
}
