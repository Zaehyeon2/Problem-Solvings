#include <bits/stdc++.h>

using namespace std;

int coin[100001];

int main(){
    int N; cin >> N;
    if(N < 0 || N > 100000){
        return -1;
    }
    coin[1] = 1;
    coin[2] = 1;
    coin[3] = 2;
    coin[4] = 2;
    coin[5] = 1;
    coin[6] = 2;
    coin[7] = 1;
    for(int i = 8; i <= N; i++){
        coin[i] = coin[i-1]+1;
        coin[i] = min(coin[i], coin[i-7]+1);
        coin[i] = min(coin[i], coin[i-5]+1);
        coin[i] = min(coin[i], coin[i-2]+1);
    }
    printf("%d\n", coin[N]);
}