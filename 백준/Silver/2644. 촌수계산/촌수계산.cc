#include <cstdio>
#include <queue>
#include <vector>
#include "cstring"

using namespace std;

vector < vector <int> > v(101);
bool chk[101];
int chon[101];

void bfs(int a){
	chon[a] = 0;
	chk[a] = 1;
	queue <int> q;
	q.push(a);
	while(!q.empty()){
		int front = q.front();
		q.pop();
		chk[front] = 1;
		for (int i = 0; i < v[front].size(); ++i)
		{
			if(chk[v[front][i]] == 0){
				q.push(v[front][i]);
				chon[v[front][i]] = chon[front] + 1;
				chk[v[front][i]] = 1;
			}
		}
	}
}

int main(){
	int n, a, b, m; scanf("%d%d%d%d", &n, &a, &b, &m);
	while(m--){
		int par, chil; scanf("%d%d", &par, &chil);
		v[par].push_back(chil);
		v[chil].push_back(par);
	}
	memset(chon, -1, sizeof(chon));
	bfs(a);
	printf("%d\n", chon[b]);
}