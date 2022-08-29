#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	vector <pair<int,string> > v;
	vector <string> ans;
	scanf("%d", &N);
	for (int i = 0; i < N; ++i)
	{
		string s;
		cin >> s;
		v.push_back(make_pair(s.size(),s));
	}
	sort(v.begin(),v.end());
	for (int i = 0; i < N; ++i)
	{
		if (v[i] != v[i+1]) {
			printf("%s\n", v[i].second.c_str());
		}
	}
	return 0;
}