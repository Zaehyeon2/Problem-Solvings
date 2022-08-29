// 10773 - 제로 

#include <iostream>
#include <stack>
#include <string>
#include <queue>

using namespace std;

stack <int> s;

int main(){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int K; cin >> K;
	 
	while(K--){
		int inp; cin >> inp;
		if(inp == 0) s.pop();
		else s.push(inp);
	}
	
	int sum = 0;
	int size = s.size() ;

	while(!s.empty()){
		sum += s.top();
		s.pop();
	}
	
	cout << sum;
} 