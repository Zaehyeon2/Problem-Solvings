#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

vector <int> v;

int main(){
	int N; scanf("%d",&N);
	while (N--) {
		int tmp; scanf("%d", &tmp);
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	int M; scanf("%d",&M);
	while (M--) {
		int tmp; scanf("%d", &tmp);
		printf("%d ", binary_search(v.begin(), v.end(), tmp));
	}
	


return 0;
}


