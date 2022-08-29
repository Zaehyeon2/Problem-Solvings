#include <queue>
#include <iostream>
#include <vector>

using namespace std;

vector < vector <int> > network(101);
int cnt = 0;
bool chk[101];

void dfs(int node){
	chk[node] = true;
	int size = network[node].size();
	for(int i = 0; i < size; i++){
		int nextnode = network[node][i];
		bool isvisit = chk[nextnode];
		if(!isvisit){
			dfs(network[node][i]);
			cnt++;
		}
	}
}

int main(){
	int N; cin >> N;
	int V; cin >> V;
	
	for(int i = 0; i < V; i++){
		int f, l; cin >> f >> l;
		network[f].push_back(l);
		network[l].push_back(f);
	}
	dfs(1);
	cout << cnt << '\n';
}