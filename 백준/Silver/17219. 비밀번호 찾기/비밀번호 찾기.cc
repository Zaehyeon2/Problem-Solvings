#include <bits/stdc++.h>

using namespace std;

map<string, string> keychain;

int main(){
    ios::sync_with_stdio(false);
	int N, M; cin >> N >> M;
	for (int i = 0; i < N; ++i)
	{
		string name, pw; cin >> name >> pw;
		keychain.insert(make_pair(name, pw));
	}
	for (int i = 0; i < M; ++i)
	{
		string name; cin >> name;
		printf("%s\n", keychain[name].c_str());
	}
}