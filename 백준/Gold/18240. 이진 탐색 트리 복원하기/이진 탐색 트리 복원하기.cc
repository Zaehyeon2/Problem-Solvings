#include <bits/stdc++.h>

using namespace std;

vector <vector <int> > tree(300002);
vector <vector <int> > tree2(300002);
int ans[3000001];

int o = 1;

void order(int N){
  if(tree2[N].size() == 0) {
    ans[N] = o++;
  }
  if(tree2[N].size() == 1) {
    order(tree2[N][0]);
    ans[N] = o++;
  }
  if(tree2[N].size() == 2) {
    order(tree2[N][0]);
    ans[N] = o++;
    order(tree2[N][1]);
  }
}

int main(){
  int N; cin >> N;
  int Max = 0;
  tree[0].push_back(1);
  for(int i = 2; i <= N; i++){
    int A; cin >> A;
    tree[A].push_back(i);
    Max = max(Max, A);
    if(tree[A].size() > tree[A-1].size() * 2) {
      cout << "-1\n";
      return 0;
    }
  }
  int p = 2;
  // tree2[0].push_back(1);
  for(int i = 1; i <= Max; i++){
    for(int j = 0; j < tree[i].size(); j++){
      tree2[tree[i-1][j/2]].push_back(tree[i][j]);
    }
  }
    order(1);
    for(int i = 1; i <= N; i++){
      cout << ans[i] << ' ';
    }
}


//        7
//    4      9
//  2   6   8
//1  3 5
