#include <cstdio>
#include <queue>
#include <algorithm>
#include "vector"

using namespace std;

int mat[26][26];
int N, ans1, ans2;
int dir[8][2] = {{1,0},{-1,0},{0,1},{0,-1}};
vector <int> v;

int bfs(int sy, int sx){
	int ret = 0;
	queue < pair <int, int> > q;
	q.push(make_pair(sy,sx));
	mat[sy][sx] = 0;
	ret ++;
	while (!q.empty()){
		int y = q.front().first, x = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++){
			int yy = y + dir[i][0], xx = x + dir[i][1];
			if (yy < 0 || yy >= N || x < 0 || xx >= N) continue;
			if (mat[yy][xx] == 1){
				q.push(make_pair(yy,xx));
				mat[yy][xx] = 0;
				ret ++;
			}
		}
	}
	return ret;
}

int main(int argc, char const *argv[])
{
  scanf("%d", &N);
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      scanf("%1d", &mat[i][j]);
    }
  }
	for (int i = 0; i < N;i++){
		for(int j = 0; j < N; j++){
			if (mat[i][j] == 1){
				v.push_back(bfs(i,j));
        ans1++;
			}
		}
	}
  sort(v.begin(),v.end());
  printf("%d\n", ans1);
  for (int i = 0; i < v.size(); i++) {
    printf("%d\n", v[i]);
  }
	return 0;
}
