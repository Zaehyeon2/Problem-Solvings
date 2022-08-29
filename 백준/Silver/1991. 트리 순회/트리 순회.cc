#include <cstdio>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

vector <pair <int, int> > tree(30);

void preorder(int root){
	if (root < 0){
		return;
	}
	printf("%c", root + 'A');
	preorder(tree[root].first);
	preorder(tree[root].second);
}

void inorder(int root){
	if (root < 0){
		return;
	}
	inorder(tree[root].first);
	printf("%c", root + 'A');
	inorder(tree[root].second);
}

void postorder(int root){
	if (root < 0){
		return;
	}
	postorder(tree[root].first);
	postorder(tree[root].second);
	printf("%c", root + 'A');
}

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	while(N--){
		char a, b, c;
		cin >> a >> b >> c;
		tree[a-'A'].first = b - 'A';
		tree[a-'A'].second = c - 'A';
	}
	preorder(0);
	printf("\n");
	inorder(0);
	printf("\n");
	postorder(0);
	printf("\n");
	return 0;
}