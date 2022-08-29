#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <deque>
#include <queue>

using namespace std;

deque <int> dq;
queue <int> seq;
int cnt;

int findq(deque <int> &dq, int n){
	for(int i = 0; i < dq.size(); i++){
		if(dq[i] == n) return i;
	}
	return -1;
}

int main(){
	int N, M; cin >> N >> M;
	for(int i = 1; i <= N; i++){
		dq.push_back(i);
	}
	while(M--){
		int tmp; cin >> tmp;
		seq.push(tmp);
	}
	while(!seq.empty()){
		if(dq.front() == seq.front()){
			dq.pop_front();
			seq.pop();
			M--;
		}
		else {
			int idx = findq(dq, seq.front());
			if(idx > dq.size()/2){
				dq.push_front(dq.back());
				dq.pop_back();
				cnt++;
			}
			else {
				dq.push_back(dq.front());
				dq.pop_front();
				cnt++;
			}
		}
	}
	printf("%d\n", cnt);
}