#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>

using namespace std;

int plate[102][102];
int dir[8][2] = {{0,1},{0,-1},{1,0},{-1,0},{1,1},{1,-1},{-1,1},{-1,-1}};

int main() {
	while(1){
		int N, M; scanf("%d%d", &N, &M);
		if(N == 0 && M == 0) break;
		memset(plate, 0, sizeof(plate));
		for (int i = 1; i <= N; ++i) {
			string inp; cin >> inp;
			for (int j = 0; j < M; ++j)
			{
				if(inp[j] == '*') plate[i][j+1] = -1;
			    else plate[i][j+1] = 0;
			}
		}
		// for (int i = 1; i <= N; ++i) {
		// 	for (int j = 1; j <= M; ++j) {
		// 		if(plate[i][j] == -1) printf("*");
		// 		else printf("%d", plate[i][j]);
		// 	}
		// 	printf("\n");
		// }
		for (int i = 1; i <= N; ++i) {
			for (int j = 1; j <= M; ++j) {
				if(plate[i][j] != -1) {
					for (int k = 0; k < 8; ++k)
					{
						int xx = dir[k][0], yy = dir[k][1];
						if(plate[i+xx][j+yy] == -1){
							plate[i][j]++;
						}
					}
				}
			}
		}
		for (int i = 1; i <= N; ++i) {
			for (int j = 1; j <= M; ++j) {
				if(plate[i][j] == -1) printf("*");
				else printf("%d", plate[i][j]);
			}
			printf("\n");
		}
	}
}