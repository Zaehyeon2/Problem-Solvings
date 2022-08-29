#include <cstdio>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int, int> ii;

int main(){
	int T; scanf("%d", &T);
	while(T--){
		int N, M; scanf("%d%d", &N, &M);
		vector <int> import;
		queue <pair<int, int> > inp;
		int ans = 0;
		for (int i = 0; i < N; ++i)
		{
			int tmp; scanf("%d", &tmp);
			import.push_back(-tmp);
			inp.push(ii(tmp, i));
		}
		sort(import.begin(), import.end());
		while(1){
			if(-import[ans] == inp.front().first){
				if(inp.front().second == M){
					break;
				}
				inp.pop();
				ans++;
			}
			else{
				// printf("%d %d\n", inp.front().first, inp.front().second);
				inp.push(inp.front());
				inp.pop();
			}
		}
		printf("%d\n", ans+1);
		import.clear();
		while(!inp.empty()) inp.pop();
		ans = 0;
		}
}