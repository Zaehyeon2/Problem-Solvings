#include <cstdio>
#include <vector>
#include <queue>
#include <functional>

using namespace std;

vector <int> v;
priority_queue <pair<int, int> > pq;

int main() {
	int tmp;
	while(scanf("%d", &tmp) != EOF){	
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size() - 1; ++i)
	{
		for (int j = i + 1; j < v.size() - 1; ++j)
		{
			if(v[i] + v[j] == v[v.size()-1]) {
				if(pq.empty()){
					pq.push(make_pair(-v[i],-v[j]));
				}
				else if(pq.top().first != -v[i] || pq.top().second != -v[j]){
					pq.push(make_pair(-v[i],-v[j]));
				}
			}
		}
	}
	int ss = pq.size();
	while(!pq.empty()){
		printf("%d %d\n", -pq.top().first, -pq.top().second);
		pq.pop();
	}
	printf("%d\n", ss);
}