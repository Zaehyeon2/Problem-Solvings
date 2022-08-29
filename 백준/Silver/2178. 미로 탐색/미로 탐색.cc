#include <algorithm>
#include <iostream>
#include <cstdio>
#include <string>
#include <queue>

using namespace std;

int arr[101][101];
int ans, N, M;
int dir[4][2] = {{1,0}, {-1,0}, {0,1}, {0,-1}};

int bfs(int sy, int sx){
	queue < pair < int, int > > q;
	q.push(make_pair(sy, sx));
	arr[0][0] = 2;
	while (!q.empty()){
		int y = q.front().first , x = q.front().second;
		q.pop();
		for (int i = 0 ; i < 4 ; i++){
			int yy = y + dir[i][0], xx = x + dir[i][1];
			if (yy < 0 || yy >= N || x < 0 || xx >= M) continue;
			if (arr[yy][xx] == 1){
				arr[yy][xx] = arr[y][x] + 1;
				q.push(make_pair(yy,xx));
			}
		}

	}
	return arr[N-1][M-1] - 1 ;
}

int main(int argc, char const *argv[])
{
	cin >> N >> M;
	for (int i = 0; i < N ; i ++){
		for (int j = 0; j < M ; j++){
			scanf("%1d", &arr[i][j]);
		}
	}
	printf("%d\n",bfs(0,0));
	return 0;
}