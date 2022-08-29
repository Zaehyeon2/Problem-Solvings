#include <cstdio>
#include <string>

using namespace std;

bool chk(int a){
	int bl = 0;
	while(a > 0){
		if(a % 10 == 6) bl++;
		else bl = 0;
		if(bl == 3) return true;
		a /= 10;
	}
	return false;
}

int main(){
	int N, K = 0; scanf("%d", &N);
	int i;
	for(i = 666; i <= 6666666; i++){
		if(chk(i)) K++;
		if(K == N) break;
	}
	printf("%d\n", i);
}