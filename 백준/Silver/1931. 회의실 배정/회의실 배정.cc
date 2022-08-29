#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

vector < pair<int, int> > v;

int main(){
  int n, tmp = 0, cnt = 0; scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int s, e; scanf("%d %d", &s, &e);
    v.push_back(make_pair(e, s));
  }
  sort(v.begin(), v.end());
  for (int i = 1; i < n; i++) {
    if (v[tmp].first <= v[i].second) {
      cnt ++;
      tmp = i;
    }
  }
  printf("%d\n", cnt + 1);
}
