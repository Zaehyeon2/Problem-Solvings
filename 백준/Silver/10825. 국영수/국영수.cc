#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#define mp(x, y) make_pair(x, y)

using namespace std;

vector <pair<int, pair<int, pair<int, string> > > > v;

bool comp(const pair<int, pair<int, pair<int, string> > >& a, const pair<int, pair<int, pair<int, string> > >& b){
	if (a.first == b.first){
		if(a.second.first == b.second.first) {
			if(a.second.second.first == b.second.second.first){
				return a.second.second.second < b.second.second.second;
			}
			else return a.second.second.first > b.second.second.first;
		}
		else return a.second.first < b.second.first;
	}
	else return a.first > b.first;
}

int main(){
	int N; scanf("%d", &N);
	for (int i = 0; i < N; ++i)
	{
		int Kor, Eng, Math;
		string name;
		cin >> name >> Kor >> Eng >> Math;
		v.push_back(mp(Kor, mp(Eng, mp(Math, name))));
	}
	sort(v.begin(), v.end(), comp);
	for (int i = 0; i < N; ++i)
	{
		cout << v[i].second.second.second + "\n";
	}
}