#include <stdio.h>

int reverse(int x){
	int ret = 0;
	while (ret < 999) {
		ret += x % 10;
		x /= 10;
		ret *= 10;
	}
	return ret / 10;
}

int main(){
	int A,B;
	scanf("%d%d",&A,&B);
	if(reverse(A)>reverse(B)){
		printf("%d",reverse(A));
	}
	else{
		printf("%d",reverse(B));
	}
}
