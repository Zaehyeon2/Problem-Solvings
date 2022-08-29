#include <cstdio>
#include <string>
#include <iostream>
#include <stack>

using namespace std;

stack <int> s;

int main() {
	int N; scanf("%d", &N);
	for(int i = 0; i < N; i++){
		string inp;
		cin >> inp;
		if(inp == "push"){
			int intinp; cin >> intinp;
			s.push(intinp);
		}
		if(inp == "pop"){
			if(s.empty() == 1){
				printf("-1\n");
			}
			else{
				printf("%d\n", s.top());
				s.pop();
			}
		}
		if(inp == "size"){
			printf("%d\n", s.size());
		}
		if(inp == "empty"){
			printf("%d\n", s.empty());
		}
		if(inp == "top"){
			if(s.empty()){
				printf("-1\n");
			}
			else{
				printf("%d\n", s.top());
			}

		}
	}
}
