#include <cstdio>
#include <queue>
#include <vector>
#include <iostream>
#define INF 987654321

using namespace std;

int V, E, S;

vector < vector < pair < int, int > > > mat(20001);

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
			int cost2= mat[here][i].second, there = mat[here][i].first;
			if (dist[there] > cost + cost2){
				dist[there] = cost + cost2;
				pq.push(make_pair(dist[there], there));
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
	}
	int End;
	cin >> S >> End;
	vector < int > dist = dijkstra(S);
	printf("%d\n", dist[End]);
	return 0;
}