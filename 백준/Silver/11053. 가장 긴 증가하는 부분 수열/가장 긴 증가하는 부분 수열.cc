#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int N, A[1001], cache[1001];

int dp(int s){
    int& ret = cache[s+1];
    if (ret != -1) return ret;
    ret = 1;
    for ( int i = s + 1; i < N; i++){
        if ( s == -1 || A[s] < A[i]){
            ret = max(ret, dp(i) + 1);
        }
    }
    return ret;
}

int main(){
    memset(cache, -1, sizeof(cache));
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i] );
    }
    printf("%d\n", dp(-1)-1);
}
