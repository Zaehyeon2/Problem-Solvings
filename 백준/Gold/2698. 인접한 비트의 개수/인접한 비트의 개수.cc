#include <bits/stdc++.h>

using namespace std;

int dp[102][102][2];


int main(){
    dp[1][0][0] = dp[1][0][1] = 1;
    for(int i = 2; i <= 100; i++){
        for(int j = 0; j < i; j++){
            dp[i][j][0] = dp[i-1][j][0] + dp[i-1][j][1];
            dp[i][j][1] = dp[i-1][j][0];
            if(j > 0){
                dp[i][j][1] += dp[i-1][j-1][1];
            }
        }
    }
    int n; cin >> n;
    while(n--){
        int a, b; scanf("%d%d", &a, &b);
        printf("%d\n", dp[a][b][0] + dp[a][b][1]);
    }
}