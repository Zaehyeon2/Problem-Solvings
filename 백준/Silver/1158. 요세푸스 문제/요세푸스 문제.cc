#include <cstdio>
#include <string>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

queue <int> q;
vector <int> v;

int main(int argc, char const *argv[])
{
	int N, M;
	cin >> N >> M;
	for ( int i = 1; i <= N; i++){
		q.push(i);
	}
	for (int i = 0; i < N; i ++){
		for( int j = 0; j < M-1; j ++){
			int tmp = q.front();
			q.pop();
			q.push(tmp);
		}
		v.push_back(q.front());
		q.pop();
	}
	printf("<");
	for ( int i = 0; i < v.size(); i ++){
		if ( i == 0){
			printf("%d", v[i]);

		}
		else{
			printf(", %d", v[i]);
		}
	}
	printf(">\n");
	return 0;
}