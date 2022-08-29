#include <cstdio>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

map <int, int> mp;
vector <int> ansv;

int main(){
  int A, B; scanf("%d%d", &A, &B);
  for (int i = 0; i < A; ++i)
  {
    int tmp; scanf("%d", &tmp);
    mp[tmp] = 1;
  }
  for (int i = 0; i < B; ++i)
  {
    int tmp; scanf("%d", &tmp);
    if(mp[tmp] == 1) mp[tmp] = 0;
  }
  bool bl = 0;
  int ans = 0;
  for (auto i = mp.begin(); i != mp.end(); ++i)
  {
    if(i->second != 0){
      bl = 1;
      ans++;
      ansv.push_back(i->first);
    }
  }
  printf("%d\n", ans);
  for (int i = 0; i < ansv.size(); ++i)
  {
    printf("%d ", ansv[i]);
  }
}

