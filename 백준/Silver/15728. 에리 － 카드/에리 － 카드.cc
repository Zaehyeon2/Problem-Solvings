#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int share[101], team[101];
vector<int> v;

int Max(int a, int b, int c, int d){
  return max(max(a, b), max(c,d));
}

int main(){
  int n, k;
  scanf("%d %d",&n,&k);
  for(int i=0;i<n;i++){
    scanf("%d",&share[i]);
  }
  for(int i=0;i<n;i++){
    scanf("%d",&team[i]);
  }
  sort(share, share+n); sort(team, team+n);
  int sharemin = 0, sharemax = n-1, teammin = 0, teammax = n-1;
  while(k--){
    if(Max(share[sharemax] * team[teammax], share[sharemax] * team[teammin], share[sharemin] * team[teammax], share[sharemin] * team[teammin]) == share[sharemax] * team[teammax] || Max(share[sharemax] * team[teammax], share[sharemax] * team[teammin], share[sharemin] * team[teammax], share[sharemin] * team[teammin]) == share[sharemin] * team[teammax]){
      teammax -= 1;
    }
    else{
      teammin += 1;
    }
  }
  printf("%d\n",Max(share[sharemax] * team[teammax], share[sharemax] * team[teammin], share[sharemin] * team[teammax], share[sharemin] * team[teammin]));
  return 0;
}
