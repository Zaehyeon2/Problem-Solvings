#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstdlib>
#define left first
#define right second

using namespace std;

typedef pair<int, int> ii;

vector <ii> tree(10001);
vector <vector<int> > con(10001);

int finde[10001];
int Max = 0;
int realMax = 0;
int p = 0;
int idx;

int inorder(int a, int height){
	if(a == -1) return -1;
	Max = max(Max, height);
	inorder(tree[a].left, height + 1);
	con[height].push_back(p++);
	inorder(tree[a].right, height + 1);
	return 1;
}

int main(){
	int N; scanf("%d", &N);
	for(int i = 0; i < N; i++) {
		int p, l, r; scanf("%d%d%d", &p, &l, &r);
		tree[p] = ii(l, r);
		finde[l] = 1; finde[r] = 1;
	}
	int root;
	for (int i = 0; i < N; ++i) {
		if(!finde[i+1]){
			root = i+1;
		}
	}
	inorder(root, 1);
	for (int i = 1; i <= Max; ++i) {
		if (realMax < con[i][con[i].size()-1] - con[i][0] + 1){
			realMax = con[i][con[i].size()-1] - con[i][0] + 1;
			idx = i;
		}
	}
	printf("%d %d\n", idx, realMax);
}