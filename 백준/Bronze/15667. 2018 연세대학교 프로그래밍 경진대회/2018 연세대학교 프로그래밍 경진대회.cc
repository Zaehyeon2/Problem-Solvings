#include <cstdio>

int main(){
	int N; scanf("%d", &N);
	for(int i = 1; i <= 10101; i++){
		if(i + i * i + 1 == N){
			printf("%d\n", i);
			return 0;
		}
	}
}