#include <iostream>
#include <string>
#include <cstdio>
#include <queue>
#include <vector>

using namespace std;
int ans = 0;

priority_queue <int, vector <int> ,greater <int> > pq;
int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	int M = N - 1;
	while (N--){
		int X;
		cin >> X;
		pq.push(X);
	}
	while (M--){
		int A = pq.top();
		pq.pop();
		int B = pq.top();
		pq.pop();
		pq.push(A+B);
		ans += A+B;

	}
	printf("%d\n", ans);
	return 0;
}