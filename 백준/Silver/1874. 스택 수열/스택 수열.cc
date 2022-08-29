#include <stack>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

stack <int> nat;
string ans;

int main(int argc, char const *argv[])
{
	int T;
	cin >> T;
	int natin = 1;
	for ( int i = 0; i < T; i ++){
		int N;
		cin >> N;
		if (nat.empty()){
			if ( N < natin){
				printf("NO\n");
				return 0;
			}
			else {
				nat.push(natin++);
				ans += '+';
			}
		}
		int k = 0;
		while (nat.top() != N){
			if (nat.top() < N){
				nat.push(natin++);
				ans += '+';
			}
			if (nat.top() > N){
				nat.pop();
				ans += '-';
			}
			k++;
			if (k > T+1){
				printf("NO\n");
				return 0;
			}
		}
		if (nat.top() == N){
			nat.pop();
			ans += '-';
			}

	}
	for (int i = 0; i < ans.size(); ++i)
	{
		printf("%c\n", ans[i]);
	}
	return 0;
}