#include <cstdio>
#include <cstring>

using namespace std;

int cache[1001][1001];
int N, K;

int dp(int N, int K){
    if (N == K || K == 0) return 1;
    int &ret = cache[N][K];
    if (ret != -1) return ret;
    return ret = (dp(N-1,K-1) + dp(N-1,K)) % 10007;
}

int main(void){
    memset(cache,-1,sizeof(cache));
    scanf("%d %d", &N, &K);
    printf("%d\n", dp(N, K));
    return 0;
}
