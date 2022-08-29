#include <algorithm>
#include <iostream>
#include <cstdio>
#include <string>
#include <queue>

using namespace std;

int arr[301][301];
int ans, N, x_1, x_2, y_1, y_2;
int dir[8][2] = {{1,2}, {1,-2}, {-1,2}, {-1,-2},{2,1},{2,-1},{-2,1},{-2,-1}};

void bfs(int sy, int sx){
	queue < pair < int, int > > q;
	q.push(make_pair(sy, sx));
	while (!q.empty()){
		int y = q.front().first , x = q.front().second;
		q.pop();
		for (int i = 0 ; i < 8 ; i++){
			int yy = y + dir[i][0], xx = x + dir[i][1];
			if (yy < 0 || yy >= N || x < 0 || xx >= N) continue;
			if (arr[yy][xx] == 0){
				arr[yy][xx] = arr[y][x] + 1;
				q.push(make_pair(yy,xx));
			}
		}
	}
}

int main(int argc, char const *argv[])
{
  int T;
  cin >> T;
  while(T--){
    cin >> N;
    for (size_t i = 0; i < N; i++) {
      for (size_t j = 0; j < N; j++) {
        arr[i][j] = 0;
      }
    }
    cin >> x_1 >> y_1 >> x_2 >> y_2;
    if (x_1 == x_2 && y_1 == y_2){
      printf("0\n");
      continue;
    }
    bfs(y_1,x_1);
    printf("%d\n", arr[y_2][x_2]);


  }
}
