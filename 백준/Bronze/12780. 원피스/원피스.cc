#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	string H;
	string N;
	cin >> H >> N;
	int Hsize = H.size();
	int Nsize = N.size();
	int ans = 0;
	for (int i = 0; i <= Hsize - Nsize; ++i)
	{
		if (H.substr(i,Nsize) == N) {
			ans += 1;
		}
	}
	cout << ans << endl;
	return 0;
}