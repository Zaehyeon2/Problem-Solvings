#include <cstdio>
#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int mat[501][501];
int N, M, ans1, ans2;
int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};

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
			int yy = y+ dir[i][0], xx = x + dir[i][1];
			if (yy < 0 || yy >= N || x < 0 || xx >= M) continue;
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
	cin >> N >> M;
	for (int i = 0; i < N;i++){
		for(int j = 0; j < M; j++){
			cin >> mat[i][j];
		}
	}
	for (int i = 0; i < N;i++){
		for(int j = 0; j < M; j++){
			if (mat[i][j] == 1){
				ans1 ++;
				ans2 = max(ans2,bfs(i,j));
			}
		}
	}
	printf("%d\n%d\n",ans1, ans2 );
	return 0;
}