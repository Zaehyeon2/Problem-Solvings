#include <iostream>
#include <cstdio>
#include <vector>


using namespace std;


vector < vector < int > > nod(1001);
bool chknod[1001];
int ans;

int N, M;

void dfs(int s){
	chknod[s] = true;
	for ( int i = 0; i < nod[s].size(); i++){
		if (chknod[nod[s][i]] == false){
			chknod[nod[s][i]] = true;
			dfs(nod[s][i]);
		}
	}
}

int main(int argc, char const *argv[])
{
	cin >> N >> M;
	while (M--){
		int u, v;
		cin >> u >> v;
		nod[u].push_back(v);
		nod[v].push_back(u);
	}
	for( int i = 1; i <= N; i++){
		if (chknod[i] == false){
			dfs(i);
			ans++;
		}
	}
	printf("%d\n", ans);
	return 0;
}