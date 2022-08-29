#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <stack>

using namespace std;

vector<stack <int> > V(7);

int main(int argc, char const *argv[])
{
	int N, P, ans = 0;
	cin >> N >> P;
	while (N--){
		int Sn, Pn;
		cin >> Sn >> Pn;
		if (V[Sn].empty()){
			V[Sn].push(Pn);
			ans++;
		}
		else{
			while(V[Sn].empty() == 0 && V[Sn].top() > Pn){
				V[Sn].pop();
				ans++;
			}
			if (V[Sn].empty()){
				V[Sn].push(Pn);
				ans++;
			}
			else if (V[Sn].top() < Pn){
				V[Sn].push(Pn);
				ans++;
			}

		}
	}
	printf("%d\n", ans);
	return 0;
}
