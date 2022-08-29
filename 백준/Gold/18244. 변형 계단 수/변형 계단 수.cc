#include <stdio.h>
#define mod 1000000007

int dp[101][10][5]; // 0 == 3 dec, 1 == 2 dec, 2(mid) == 1 dec || inc, 3 == 2 inc, 4 == 3 inc

int main(){
    int N;
    int sum = 0;
    int mid = 2;
    scanf("%d", &N);
    for (int i = 0; i < 10; i++){
        dp[1][i][mid] = 1;
    }
    for(int i = 1; i < 9; i++){
        dp[2][i][mid+1] = dp[1][i-1][mid];
        dp[2][i][mid-1] = dp[1][i+1][mid];
    }
    dp[2][0][mid-1] = dp[1][1][mid];
    dp[2][9][mid+1] = dp[1][8][mid];
    for (int i = 3; i <= N; i++){
        for (int j = 0; j < 10; j++){
            if (j == 0){
                dp[i][0][mid-1] = dp[i-1][1][mid+1] % mod;
                dp[i][0][mid-2] = dp[i-1][1][mid-1] % mod;
            }
            else if (j == 9) {
                dp[i][9][mid+1] = dp[i-1][8][mid-1] % mod;
                dp[i][9][mid+2] = dp[i-1][8][mid+1] % mod;
            }
            else {
                dp[i][j][mid+1] = (dp[i-1][j-1][mid-1] + dp[i-1][j-1][mid-2]) % mod;
                dp[i][j][mid+2] = dp[i-1][j-1][mid+1] % mod;
                dp[i][j][mid-1] = (dp[i-1][j+1][mid+1] + dp[i-1][j+1][mid+2]) % mod;
                dp[i][j][mid-2] = dp[i-1][j+1][mid-1] % mod;
            }
        }
    }
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 5; j++){
            sum += dp[N][i][j];
            sum %= mod;
        }
    }
    printf("%d\n", sum % mod);
    
}
