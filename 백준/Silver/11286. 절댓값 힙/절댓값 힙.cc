#include <iostream>
#include <string>
#include <cstdio>
#include <queue>
#include <vector>
#include <cmath>

using namespace std;

priority_queue < pair < int, int > , vector < pair <int, int> > ,greater <pair <int, int> > > pq;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	while (N--){
		int X;
		cin >> X;
		if (X == 0){
			if (pq.empty()){
				printf("0\n");
			}
			else{
				printf("%d\n", pq.top().second);
				pq.pop();
			}
		}
		else{
			pq.push(make_pair(abs(X),X));
		}
	}
	return 0;
}