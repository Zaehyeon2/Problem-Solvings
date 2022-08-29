#include <cstdio>
#include <algorithm>

using namespace std;

int arr[101];

int main() {
	int N, M; scanf("%d%d", &N, &M);
	int ans = 0;
	for (int i = 0; i < N; ++i)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < N - 2; ++i)
	{
		for (int j = i + 1; j < N - 1; ++j)
		{
			for (int k = j + 1; k < N; ++k)
			{
				if(arr[i] + arr[j] + arr[k] <= M){
					ans = max(ans, arr[i] + arr[j] + arr[k]);
				}
			}
		}
	}
	printf("%d\n", ans);
}