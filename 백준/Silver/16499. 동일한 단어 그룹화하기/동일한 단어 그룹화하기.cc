#include <string>
#include <algorithm>
#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

vector <string> v;

int main(){
	int N; cin >> N;
	for (int i = 0; i < N; ++i)
	{
		char tmp[12]; scanf("%s", tmp);
		sort(tmp, tmp+strlen(tmp));
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	int ans = 1;
	for (int i = 0; i < N-1; ++i)
	{
		if(v[i] != v[i+1]) ans++;
	}
	printf("%d\n", ans);
}