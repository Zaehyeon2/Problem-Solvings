#include <cstdio>
#include <vector>

using namespace std;

long long sum = 0;
long long ans = 0;

vector <int> v;

int main() {
	int n; scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		int tmp; scanf("%d", &tmp);
		sum += tmp;
		v.push_back(tmp);
	}
	int ss = v.size();
	for (int i = 0; i < ss; ++i)
	{
		sum -= v[i];
		ans += v[i] * sum;
	}
	printf("%lld\n", ans);
}