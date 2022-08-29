#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector <pair <int, pair<int, string> > > v;

int main() {
	int T; cin >> T;
	for (int i = 0; i < T; ++i){
		int age; string name;
		cin >> age >> name;
		v.push_back(make_pair(age, make_pair(i, name)));
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < T; ++i){
		cout << v[i].first << " " << v[i].second.second << "\n";
	}
}