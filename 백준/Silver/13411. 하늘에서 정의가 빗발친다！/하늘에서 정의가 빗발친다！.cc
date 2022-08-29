#include <cstdio>
#include <cmath>
#include <queue>
#include <vector>
#include <functional>

using namespace std;

typedef pair<long double,int> li;

int main(){
	int N;
	priority_queue<li,vector<li>,greater<li> > pq;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		long double x,y,v;
		scanf("%Lf%Lf%Lf",&x,&y,&v);
		pq.push(li(sqrt(x*x+y*y)/v,i+1));
	}
	while(!pq.empty()) printf("%d\n",pq.top().second),pq.pop();
	return 0;
}
