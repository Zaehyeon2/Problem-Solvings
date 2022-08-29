#include <cstdio>
#include <queue>
#define INF 150000
#include <vector>

using namespace std;

int N;
int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
int arr[126][126];
int dist[126][126];
int k;


void dijkstra(){
	priority_queue < pair < int, pair < int, int > >,vector < pair < int, pair < int, int > > >, greater< pair < int, pair < int, int > > > > pq;
	pq.push(make_pair(arr[0][0],make_pair(0,0)));
	dist[0][0] = arr[0][0];
	while(!pq.empty()){
		int cost = pq.top().first, herey = pq.top().second.first, herex = pq.top().second.second;
		pq.pop();
		if (dist[herey][herex] < cost) continue;
		for (int i = 0; i < 4; i++)
		{
			int hereyy = herey + dir[i][0], herexx = herex + dir[i][1];
			if (hereyy < 0 || hereyy >= N || herexx < 0 || herexx >= N ) continue;
			int cost2 = cost + arr[hereyy][herexx];
			if (dist[hereyy][herexx] > cost2){
				dist[hereyy][herexx] = cost2;
				pq.push(make_pair(cost2, make_pair(hereyy, herexx)));
			}
		}
	}
}

int main()
{
	int nummmmmmmm = 1;
	while (1){
		scanf("%d", &N);
		if (N == 0) break;
		for (int i = 0; i < N; i++){
			for (int j = 0; j < N; j++){
				scanf("%d",&k);
				arr[i][j] = k;
				dist[i][j] = INF;
			}
		}
		dijkstra();
		printf("Problem %d: %d\n", nummmmmmmm, dist[N-1][N-1]);
		nummmmmmmm++;
	}
	return 0;
}




