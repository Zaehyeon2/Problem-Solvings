// 15828 - Router 

#include <iostream>
#include <stack>
#include <string>
#include <queue>

using namespace std;

queue <int> router;

int main(){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int N; cin >> N;
	
	while(1){
		int packet; cin >> packet;
		if(packet == -1) break;
		else if (packet == 0) router.pop();
		else {
			if (router.size() != N) router.push(packet);
		}
	}
	
	if(router.empty()) cout << "empty\n";
	
	else {
		while(!router.empty()){
			cout << router.front() << ' ';
			router.pop();
		}
		cout << '\n';
	}
}