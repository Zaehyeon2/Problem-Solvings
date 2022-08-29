#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int atk[6][3] = {{-9, -3, -1}, {-9, -1, -3}, {-3, -1, -9}, {-3, -9, -1}, {-1, -9, -3}, {-1, -3, -9}};
int inp[3];
int SCV[61][61][61];

int dp(int a, int b, int c){
	if(!a && !b && !c) return 0;
	int &ret = SCV[a][b][c];
	if(ret != -1) return ret;
	ret = 987654321;
	for (int i = 0; i < 6; ++i)
	{
		ret = min(ret, dp(max(0, a + atk[i][0]), max(0, b + atk[i][1]), max(0, c + atk[i][2])) + 1);
	}
	return ret;
}

int main() {
	int N; scanf("%d", &N);
	for (int i = 0; i < N; ++i)
	{
		scanf("%d", &inp[i]);
	}
	if(N == 1){
		if(inp[0] % 9){
			printf("%d\n", (inp[0] / 9) + 1);
		}
		else{
			printf("%d\n", inp[0] / 9);
		}
	}
	else if(N == 2){
		int cnt = 0;
		while(1){
			if(inp[0] <= 0 && inp[1] <= 0) break;
			cnt++;
			if(inp[0] > inp[1]) {
				inp[0] -= 9;
				inp[1] -= 3;
			}
			else {
				inp[0] -= 3;
				inp[1] -= 9;
			}
		}
		printf("%d\n", cnt);
	}
	else {
		memset(SCV, -1, sizeof(SCV));
		printf("%d\n", dp(inp[0], inp[1], inp[2]));
	}
}