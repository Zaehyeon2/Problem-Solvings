#include <bits/stdc++.h>

using namespace std;

long long dp[501][501];
int arr[501][2];

int main(){
    int N; cin >> N;
    for(int i = 1; i <= N; i++){
        cin >> arr[i][0] >> arr[i][1];
    }
    for(int i = 1; i <= N; i++){
        for(int j = i+1; j <= N; j++){
            dp[i][j] = (1LL << 31) -1;
        }
    }
    for(int i = 1; i <= N-1; i++){
        dp[i][i+1] = arr[i][0] * arr[i][1] * arr[i+1][1];
    }
    for(int i = 2; i <= N; i++){
        for(int j = 1; j <= N-i; j++){
            for(int k = j; k < i+j; k++){
                dp[j][j+i] = min(dp[j][j+i], dp[j][k] + dp[k+1][j+i] + arr[j][0] * arr[k][1] * arr[j+i][1]);
            }
        }
    }
    printf("%lld\n", dp[1][N]);
}