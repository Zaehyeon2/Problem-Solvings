#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> A;
vector <int> B;

int main() {
	int N, M; scanf("%d%d", &N, &M);
	int sum = 0;
	for (int i = 0; i < N; ++i)
	{
		int tmp; scanf("%d", &tmp);
		A.push_back(tmp);
	}
	for (int i = 0; i < M; ++i)
	{
		int tmp; scanf("%d", &tmp);
		B.push_back(tmp);
	}
	sort(B.begin(), B.end());
	for (int i = 0; i < A.size(); ++i)
	{
		if(binary_search(B.begin(), B.end(), A[i])){
			sum++;
		}
	}
	printf("%lu\n", A.size() + B.size() - 2 * sum);
}