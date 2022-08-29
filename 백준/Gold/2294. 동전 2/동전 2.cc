#include <bits/stdc++.h>

using namespace std;

int coin[101];
int dp[10002];

int main(){
    int n, k; cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> coin[i];
    }
    for(int i = 1; i <= k; i++){
        dp[i] = 987654321;
    }
    for(int i = 0; i < n; i++){
        for(int j = coin[i]; j <= k; j++){
            dp[j] = min(dp[j], dp[j-coin[i]]+1);
        }
    }
    if(dp[k] == 987654321) cout << -1 << endl;
    else cout << dp[k] << endl;
}