#include <cstdio>
#include <queue>
#include <vector>
#include <iostream>
#include <algorithm>
#define INF 200000001

using namespace std;

int V, E, S1, S2;

vector < vector < pair < int, int > > > mat(1000);

vector < int > dijkstra(int s){
	priority_queue < pair < int, int >, vector < pair < int, int > >, greater < pair < int, int > > > pq;
	pq.push(make_pair(0,s));
	vector < int > dist(V+1, INF);
	dist[s] = 0;
	while(!pq.empty()){
		int cost = pq.top().first, here = pq.top().second;
		pq.pop();
		if (dist[here] < cost) continue;
		for (int i = 0; i < mat[here].size(); ++i)
		{
			int nextCost = cost + mat[here][i].second;
			int there = mat[here][i].first;
			if (dist[there] > nextCost){
				dist[there] = nextCost;
				pq.push(make_pair(nextCost, there));
			}
		}
	}
	return dist;
}

int main(int argc, char const *argv[])
{
	cin >> V >> E;
	while ( E-- ){
		int u, v, w;
		cin >> u >> v >> w;
		mat[u].push_back(make_pair(v,w));
		mat[v].push_back(make_pair(u,w));
	}
	cin >> S1 >> S2;
	vector < int > dist = dijkstra(1);
	vector < int > dist2 = dijkstra(S1);
	vector < int > dist3 = dijkstra(S2);
	int ans = dist[S1] + dist2[S2] + dist3[V];
	int ans2 = dist[S2] + dist3[S1] + dist2[V];
	int fans = min(ans,ans2);
	if (fans >= INF){
		fans = -1;
	}
	printf("%d\n", fans);
	return 0;
}