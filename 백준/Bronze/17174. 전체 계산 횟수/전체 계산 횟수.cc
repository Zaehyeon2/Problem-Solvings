#include <bits/stdc++.h>
#define mp(x, y) make_pair(x, y)

using namespace std;

int arr[1001];

int main(){
    int N, M; cin >> N >> M;
    int sum = 0;
    while(N >= M){
        sum += N;
        N /= M;
    }
    sum += N;
    printf("%d\n", sum);
}