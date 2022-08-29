#include <bits/stdc++.h>

using namespace std;

int arr[100001];

int main(){
    int N; cin >> N;
    for(int i = 0; i < N; i++){
        scanf("%d",&arr[i]);
    }
    sort(arr, arr+N);
    int M; cin >> M;
    while(M--){
        int left = 0, right = N-1, mid;
        int target; scanf("%d", &target);
        while(left <= right){
            mid = (left+right)/2;
            if(arr[mid] == target) break;
            if(arr[mid] > target) right = mid-1;
            else left = mid+1;
        }
        if(left <= right) printf("1\n");
        else printf("0\n");
    }
}