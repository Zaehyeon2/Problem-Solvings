#include <bits/stdc++.h>

using namespace std;


int main(){
	int T; cin >> T;
	while(T--){
		int Max = -1, Min = 10000000;
		
		vector <vector<int> > v(100);
		
		string W; cin >> W; int K; cin >> K;
		for(int i = 0; i < W.size(); i++){
			v[W[i]-'a'].push_back(i);
		}
		for(int i = 0; i < 26; i++){
			if(v[i].size() < K) continue;
			for(int j = 0; j < v[i].size()-K+1; j++){
				if(Min > v[i][j+K-1] - v[i][j]) {
					Min = v[i][j+K-1] - v[i][j];
				}
				if(Max < v[i][j+K-1] - v[i][j]) {
					Max = v[i][j+K-1] - v[i][j];
				}
			}
		}
		
		if (Max == -1 && Min == 10000000) cout << -1 << '\n';
		else cout << Min+1 << ' ' << Max+1 <<'\n';
	}
} 