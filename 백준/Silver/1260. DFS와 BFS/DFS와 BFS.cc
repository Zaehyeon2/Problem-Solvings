//1260
#include <queue>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <vector <int> > graph(1001);
int chkd[1001];
int chkb[1001];

void dfs(int node);
void bfs(int node);

void dfs(int node){
	chkd[node] = 1;
	cout << node << " ";
	for(int i = 0; i < graph[node].size(); i++){
		if(chkd[graph[node][i]] == 0){
			dfs(graph[node][i]);
		}
	}
}

void bfs(int node){
	chkb[node] = 1;
	queue <int> q;
	q.push(node);
	while(!q.empty()){
		int front = q.front();
		cout << front << " ";
		q.pop();
		for(int i = 0; i < graph[front].size(); i++){
			if(chkb[graph[front][i]] == 0){
				q.push(graph[front][i]);
				chkb[graph[front][i]] = 1;
			}
		}
	}
}

int main(){
	int N, M, V; cin >> N >> M >> V;
	for(int i = 0; i < M; i++){
		int S, E; cin >> S >> E;
		graph[S].push_back(E);
		graph[E].push_back(S);
	}
	for(int i = 0; i <= 1000; i++){
		sort(graph[i].begin(), graph[i].end());
	}
	dfs(V);
	cout << '\n';
	bfs(V);
	cout << '\n';
}