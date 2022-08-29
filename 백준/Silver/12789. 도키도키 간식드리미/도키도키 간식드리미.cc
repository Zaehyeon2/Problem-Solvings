#include <cstdio>
#include <stack>
#include <queue>

using namespace std;

queue <int> inp;
stack <int> waiting;

int main(){
	int N; scanf("%d", &N);
	int k = 1;
	while(N--){
		int tmp; scanf("%d", &tmp);
		inp.push(tmp);
	}
	while(inp.size() || waiting.size()){
		if(!inp.empty() && inp.front() == k){
			inp.pop();
			k++;
		}
		else if(!waiting.empty() && waiting.top() == k){
			waiting.pop();
			k++;
		}
		else if (!inp.size()){
			break;
		}
		else {
			waiting.push(inp.front());
			inp.pop();
		}
	}
	if(waiting.size()){
		printf("Sad\n");
	}
	else{
		printf("Nice\n");
	}
}