#include <cstdio>

int arr[21];

void init(){
	for(int i = 1; i <= 20; i++){
		arr[i] = i;
	}
}

void swap(int a, int b){
	if(a > b) return;
	int tmp = arr[a];
	arr[a] = arr[b];
	arr[b] = tmp;
	swap(++a, --b);
}

void printall(){
	for (int i = 1; i < 21; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main(){
	init();
	for (int i = 0; i < 10; ++i)
	{
		int a, b; scanf("%d%d", &a, &b);
		swap(a, b);
	}
	printall();
}