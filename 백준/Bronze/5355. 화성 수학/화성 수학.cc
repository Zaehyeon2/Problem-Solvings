//

#include <stdio.h>
#include <string.h>

char ans[31];

int main(){
	int T; scanf("%d", &T);
	while(T--){
		float inp;
		char math[200] = {};
		scanf("%f %[^\n]s", &inp, math);
		int ss = strlen(math);
		for (int i = 0; i < ss; i += 2) {
			if(math[i] == '@'){
				inp *= 3;
			}
			else if(math[i] == '%'){
				inp += 5;
			}
			else {
				inp -= 7;
			}	
		}
		printf("%.2f\n", inp);
	}
}