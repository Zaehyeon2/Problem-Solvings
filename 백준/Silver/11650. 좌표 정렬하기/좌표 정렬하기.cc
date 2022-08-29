#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	vector<pair <int, int> > v;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		int x, y;
		scanf("%d %d", &x, &y);
		v.push_back(make_pair(x, y));
	}
	sort(v.begin(),v.end());
	for (int i = 0; i < N; ++i)
	{
		printf("%d %d\n", v[i].first, v[i].second);
	}
	return 0;
}