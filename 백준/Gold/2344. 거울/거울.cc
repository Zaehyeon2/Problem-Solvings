#include <cstdio>

int arr[1002][1002];
int N, M;

int laser(int y, int x, char dir){
	if (x == M+1 || x == 0 || y == N+1 || y == 0){
		return arr[y][x] - 1;
	}
	if(dir == 'u'){
		if(arr[y][x] == 1){
			return laser(y, x+1, 'r');
		}
		return laser(y-1, x, 'u');
	}
	else if(dir == 'd'){
		if(arr[y][x] == 1){
			return laser(y, x-1, 'l');
		}
		return laser(y+1, x, 'd');

	}
	else if(dir == 'l'){
		if(arr[y][x] == 1){
			return laser(y+1, x, 'd');
		}
		return laser(y, x-1, 'l');
	}
	else {
		if(arr[y][x] == 1){
			return laser(y-1, x, 'u');
		}
		return laser(y, x+1, 'r');
	}
}

int main(){
	scanf("%d%d", &N, &M);
	for(int i = 1; i <= N; i++){
		for(int j = 1; j <= M; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	int k = 2;
	for (int i = 1; i <= N; ++i)
	{
		arr[i][0] = k++;
	}
	for (int i = 1; i <= M; ++i)
	{
		arr[N+1][i] = k++;
	}
	for (int i = N; i >= 1; --i)
	{
		arr[i][M+1] = k++;
	}
	for (int i = M; i >= 1; --i)
	{
		arr[0][i] = k++;
	}
	for (int i = 1; i <= N; ++i)
	{
		printf("%d ", laser(i, 1, 'r'));
	}
	for (int i = 1; i <= M; ++i)
	{
		printf("%d ", laser(N, i, 'u'));
	}
	for (int i = N; i >= 1; --i)
	{
		printf("%d ", laser(i, M, 'l'));
	}
	for (int i = M; i >= 1; --i)
	{
		printf("%d ", laser(1, i, 'd'));
	}
	printf("\n");
}