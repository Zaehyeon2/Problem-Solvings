#include <bits/stdc++.h>

using namespace std;

int arr[1001];
int dp[1001];

int main(){
    int n; cin >> n;
    for(int i = 0; i < n;i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        if(dp[i] == 0) dp[i] = 1;
        for(int j = 0; j < i; j++){
            if(arr[i] < arr[j] && dp[i] < dp[j]+1){
                dp[i] = dp[j]+1;
            }
        }
    }
    int Max = 0;
    for(int i = 0; i < n; i++){
        Max = max(Max, dp[i]);
    }
    printf("%d\n",Max);
}