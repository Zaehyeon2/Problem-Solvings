#include <bits/stdc++.h>

using namespace std;

int arr[2001];
int dp[2001][2001];

// int pal(int s, int e){
//     if(s >= e) return 1;
//     if(dp[s][e] != -1) return dp[s][e];
//     if(arr[s] != arr[e]) return dp[s][e] = 0;
//     return dp[s][e] = pal(s+1, e-1);
// }

int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        dp[i][i] = 1;
    }
    for(int i = 0; i < n-1; i++){
        if(arr[i] == arr[i+1]){
            dp[i][i+1] = 1;
        }
    }
    for(int i = 2; i < n; i++){
        for(int j = 0; j < n-i; j++){
            if(arr[j] == arr[j+i] && dp[j+1][j+i-1] == 1){
                dp[j][j+i] = 1;
            }
        }
    }
    int m; cin >> m;
    // memset(dp, -1, sizeof(dp));
    for(int i = 0; i < m; i++){
        int s, e; scanf("%d%d", &s, &e);
        printf("%d\n", dp[s-1][e-1]);
    }
}