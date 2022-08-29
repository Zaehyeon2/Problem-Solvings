#include <cstdio>
#include <deque>
#include <cstring>

using namespace std;

deque <int> dq;

int main(){
	int T; scanf("%d",&T);
	while(T--) {
		char inp[100001];
		scanf("%s", inp);
		int n; scanf("%d\n%*c", &n);
		bool norm = 1;
		bool bl = 1;
		for (int i = 0; i < n; ++i)
		{
			int tmp; scanf("%d%*c", &tmp);
			dq.push_back(tmp);
		}
		if(n == 0){
			scanf("%*c");
		}
		int fsize = strlen(inp);
		for (int i = 0; i < fsize; ++i)
		{
			if(inp[i] == 'R'){
				norm = !norm;
			}
			else{
				if (dq.size() == 0){
					printf("error\n");
					dq.clear();
					bl = 0;
					break;
				}
				else if(norm == 1){
					dq.pop_front();
				}
				else{
					dq.pop_back();
				}
			}
		}
		if(bl == 1){
			printf("[");
		}
		while(!dq.empty()){
			if(norm == 1){
				printf("%d", dq.front());
				dq.pop_front();
			}
			else{
				printf("%d", dq.back());
				dq.pop_back();
			}
			if(dq.size() != 0){
				printf(",");
			}
		}
		if(bl == 1) printf("]\n");
	}
}