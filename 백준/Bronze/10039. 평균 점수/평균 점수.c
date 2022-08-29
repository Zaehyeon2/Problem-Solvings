#include <stdio.h>

int main(void) {
	int count = 0;
	int total = 0;
	int a;
	while (count++<5){
		scanf("%d", &a);
		if (a<40){
			total += 40;
		}
		else {
			total += a;
		}
		
	}
	printf("%d", total/5);
	return 0;
}
