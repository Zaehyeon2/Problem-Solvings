#include <bits/stdc++.h>

using namespace std;

vector <pair<int, int> > v;

int main(void) {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int N; cin >> N;
	int currentmos = 0, maxmos = 0, timestart = 0, timeend = 0, seq = 0;
	bool chk = 0;
	for(int i = 0; i < N; i++){
		int S, E; cin >> S >> E;
		v.push_back({S, true});
		v.push_back({E, false});
	}
	v.push_back({2100000003, false});
	sort(v.begin(), v.end());
	for(int i = 0; i < 2*N; i++){
		if(v[i].second) seq++;
		else seq--;
		if(v[i].first != v[i+1].first) {
			currentmos += seq;
			seq = 0;
			if(currentmos > maxmos){
				maxmos = currentmos;
				timestart = v[i].first;
				chk = 1;
			}
			if (chk == 1 && currentmos < maxmos){
				chk = 0;
				timeend = v[i].first;
			}
		}
	}

	cout << maxmos << '\n' << timestart << ' ' << timeend << '\n';
}