#include <cstdio>

int N;
int dp[1001];
int A[1001];
int max = 0;

int main(){
	scanf("%d",&N);
    if(N < 1 || N > 1000) return -1;
	for(int i=1;i<=N;i++){
		scanf("%d", &A[i]);
        if(A[i] < 1 || A[i] > 1000) return -1;
	}
	for(int i=1;i<=N;i++){
		int min = 0;
		for(int j=0;j<i;j++){
			if(A[i] < A[j]){
				if(min < dp[j]) min = dp[j];
			}
		}
		dp[i] = min + A[i];
		if(max < dp[i]) max = dp[i];
	}
	printf("%d\n",max);
}