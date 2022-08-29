//

#include <stdio.h>
#include <string.h>

char ans[31];

int main(){
	int m, n; scanf("%d%d", &m, &n);
	if(m == 0){
		printf("0\n");
		return 0;
	}
	for (int i = 0; m > 0; i++) {
		if(0 <= m % n && m % n <= 9){
			ans[i] = '0' + m % n;
		}
		else {
			ans[i] = 'A' + (m % n) % 10;
		}
		m /= n;
	}
	int ss = strlen(ans);
	for (int i = ss - 1; i >= 0; i--){
		printf("%c", ans[i]);
	}
	printf("\n");
}