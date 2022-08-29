#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	scanf("%d" ,&N);
	vector<int> v(1000000);
	for (int i = 0; i < N; ++i)
	{
		scanf("%d",&v[i]);
	}
	sort(v.begin(),v.begin() + N);
	for (int i = N-1; i >= 0; i--)
	{
		printf("%d\n", v[i]);
	}
}
