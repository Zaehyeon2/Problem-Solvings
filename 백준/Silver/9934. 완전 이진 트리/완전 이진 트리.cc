#include <cstdio>
#include <iostream>

using namespace std;

int tree[1100];
int num = 1;

void inorder(int root){
	if(root > num){
		return;
	}
	inorder(root*2);
	cin >> tree[root];
	inorder(root*2+1);
}

int main(){
	int N; cin >> N;
	for (int i = 0; i < N; ++i)
	{
		num *= 2;
	}
	num--;
	inorder(1);
	int K = 1;
	for (int i = 1; i <= num; ++i)
	{
		printf("%d ", tree[i]);
		if(i == K){
			printf("\n");
			K = (K+1)*2-1;
		}
	}
}
