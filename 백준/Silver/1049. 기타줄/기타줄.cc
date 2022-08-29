#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

vector <int> set;
vector <int> each;

int Min(int a, int b, int c) {
  return min(a, min(b, c));
}

int main() {
  int N, M; scanf("%d %d", &N, &M);
  for (int i = 0; i < M; i++) {
    int tmp1, tmp2; scanf("%d%d", &tmp1, &tmp2);
    set.push_back(tmp1); each.push_back(tmp2);
  }
  sort(set.begin(), set.end()); sort(each.begin(), each.end());
  printf("%d\n", Min((N / 6) * set[0] + (N % 6) * each[0], (((N - 1) / 6) + 1) * set[0], N * each[0]));
}
