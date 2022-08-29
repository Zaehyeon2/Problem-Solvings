#include <cstdio>
#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int mat[101][101], arr[101][101];
int N, ans1, k, maxh = 0;
int dir[8][2] = {{1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};

int bfs(int sy, int sx){
	int ret = 0;
	queue < pair <int, int> > q;
	q.push(make_pair(sy,sx));
	arr[sy][sx] = 0;
	ret ++;
	while (!q.empty()){
		int y = q.front().first, x = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++){
			int yy = y+ dir[i][0], xx = x + dir[i][1];
			if (yy < 0 || yy >= N || x < 0 || xx >= N) continue;
			if (arr[yy][xx] == 1){
				q.push(make_pair(yy,xx));
				arr[yy][xx] = 0;
				ret ++;
			}
		}

	}
	return ret;

}

int main()
{
  scanf("%d", &N);
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      scanf("%d", &mat[i][j]);
    }
  }
	for (k = 1; k < 101; k++){
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (mat[i][j] >= k)
					arr[i][j] = 1;
				else
					arr[i][j] = 0;
			}
		}
  	for (int i = 0; i < N;i++){
    	for(int j = 0; j < N; j++){
				if(arr[i][j] == 1){
        	bfs(i, j);
        	ans1++;
				}
			}
  	}
		maxh = max(maxh, ans1);
		ans1 = 0;
  }
  printf("%d\n", maxh);

}
