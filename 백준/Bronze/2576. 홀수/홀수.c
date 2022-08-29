#include <stdio.h>

int main() {
	int count, sn = 0;
	int total = 0;
	int minimum = 100;
	int a ;
	while (count++<7){
		scanf("%d", &a);
		if (a % 2 == 1){
			total += a;
			sn = 1;
			if (a < minimum){
				minimum = a;
		
			}
		}
	}
	if (sn != 1){
		printf("-1");
	}
	else {
		printf("%d \n%d", total, minimum);
	}
	return 0;
}
