#include <cstdio>

int main() {
	int N, K;
	scanf("%d%d", &N, &K);
	int ans = 1;
	for (int i = 0; i < K; ++i)
	{
		ans *= (N - i);
	}
	for (int i = 1; i <= K; i++){
		ans /= i;
	}
	printf("%d\n", ans);
}