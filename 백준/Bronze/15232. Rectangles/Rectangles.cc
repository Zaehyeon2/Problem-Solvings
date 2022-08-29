#include <stdio.h>

void draw(int R,int C){
	for(int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			printf("%s", "*");
		}
		printf("\n");
	}
}

int main(){
	int r,c;
	scanf("%d%d",&r,&c);
	draw(r,c);
}
