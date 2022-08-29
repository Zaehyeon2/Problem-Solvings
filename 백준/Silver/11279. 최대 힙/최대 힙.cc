#include <cstdio>
#include <queue>
#include <vector>

using namespace std;

priority_queue <int, vector <int> ,less <int> > pq;
int main()
{
	int N;
	scanf("%d", &N);
	while (N--){
		int X;
		scanf("%d", &X);
		if (X == 0){
			if (pq.empty()){
				printf("0\n");
			}
			else{
				printf("%d\n", pq.top());
				pq.pop();
			}
		}
		else{
			pq.push(X);
		}
	}
	return 0;
}