#include <bits/stdc++.h>
#define mp(x, y) make_pair(x, y)

using namespace std;

int arr[1001];
int sum = 0;

int dp[51];

int main(){
    int N; cin >> N;
    dp[0] = dp[1] = 1;
    for(int i = 2; i <= 50; i++){
        dp[i] = 1;
        dp[i] += (dp[i-1]%1000000007 + dp[i-2]%1000000007)%1000000007;
    }
    printf("%d\n", dp[N]);
}