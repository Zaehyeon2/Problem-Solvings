#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#define mp(x, y) make_pair(x, y)

using namespace std;

vector <pair<int, pair<int, pair<string, string> > > > v;
vector <string> v2;

bool comp(const pair<int, pair<int, pair<string, string> > >& a, const pair<int, pair<int, pair<string, string> > >& b){
	if (a.first == b.first){
		return a.second.first < b.second.first;
	}
	else return a.first > b.first;
}

int main(){
	int N, K; scanf("%d%d", &N, &K);
	for (int i = 0; i < N; ++i)
	{
		int prob, pen;
		string univ, team;
		cin >> univ >> team >> prob >> pen;
		v.push_back(mp(prob, mp(pen, mp(univ, team))));
	}
	v2.push_back("");
	sort(v.begin(), v.end(), comp);
	int n = 0, k = 0;
	bool bl = 1;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < v2.size(); ++j)
		{
			if(v2[j] == v[i].second.second.first){
				bl = 0;
			}
		}
		if(bl == 1){
			cout << v[i].second.second.second + "\n";
			v2.push_back(v[i].second.second.first);
			k++;
		}
		bl = 1;
		if(k == K) return 0;
	}
}