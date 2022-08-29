#include <cstdio>
#include <vector>
#include <algorithm>
#define mp(x, y) make_pair(x, y)

using namespace std;

int main(){
  vector <pair<float, float> > v;
  for (size_t i = 0; i < 3; i++) {
    float tmp1, tmp2; scanf("%f%f", &tmp1, &tmp2);
    v.push_back(mp(tmp1, tmp2));
  }
  sort(v.begin(), v.end());
  if(v[0].first == v[1].first && v[1].first == v[2].first){
    printf("%s\n", "WHERE IS MY CHICKEN?");
  }
  else if(v[0].second == v[1].second && v[1].second == v[2].second){
    printf("%s\n", "WHERE IS MY CHICKEN?");
  }
  else if(((v[1].first - v[0].first) / (v[1].second - v[0].second)) == ((v[2].first - v[1].first) / (v[2].second - v[1].second))) printf("%s\n", "WHERE IS MY CHICKEN?");
  else printf("%s\n", "WINNER WINNER CHICKEN DINNER!");
}
