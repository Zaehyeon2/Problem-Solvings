#include <cstdio>
#include <iostream>

using namespace std;

int w, h;
int mat[52][52];
int dir[8][2] = {{1,0},{-1,0},{0,1},{0,-1},
				{1,1},{1,-1},{-1,1},{-1,-1}};

void dfs(int y, int x);

int main(){
	while(1){
		cin >> w >> h;
		int cnt = 0;
		if(!w && !h) break;
		for (int i = 0; i < h; ++i)
		{
			for (int j = 0; j < w; ++j)
			{
				cin >> mat[i][j];
			}
		}
		for (int i = 0; i < h; ++i)
		{
			for (int j = 0; j < w; ++j)
			{
				if(mat[i][j] == 1){
					dfs(i, j);
					cnt++;
				}
			}
		}
		printf("%d\n", cnt);
	}
}

void dfs(int y, int x){
	mat[y][x] = 0;
	for (int i = 0; i < 8; ++i)
	{
		int yy = y + dir[i][0]; int xx = x + dir[i][1];
		if(yy < 0 || yy >= h || xx < 0 || xx >= w) continue;
		if(mat[yy][xx] == 1){
			dfs(yy, xx);
		}
	}

}