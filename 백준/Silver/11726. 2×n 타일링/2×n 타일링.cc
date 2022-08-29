#include "cstdio"
#include <cstring>


int cache[1001];
int N;

int dp(int s){
    if (s <= 1) return 1;
    int& ret = cache[s];
    if (ret != -1) return ret;
    return ret = (dp(s-1) + dp(s-2)) % 10007;
}


int main(void){
    memset(cache,-1,sizeof(cache));
    int N; scanf("%d", &N);
    printf("%d\n", dp(N));

}
