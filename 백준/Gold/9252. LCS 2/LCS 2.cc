#include <bits/stdc++.h>

using namespace std;

string A, B;
int DP[1001][1001];

string backtracking(int i, int j){
	if(i == 0 || j == 0){
		return "";
	}
	if(DP[i][j-1] == DP[i][j]) return backtracking(i, j-1);
	if(DP[i-1][j] == DP[i][j]) return backtracking(i-1, j);
	return backtracking(i-1, j-1)+ A[i-1];
}

int main(){
	cin >> A >> B;
	for (int i = 1; i <= A.size(); ++i)
	{
		for (int j = 1; j <= B.size(); ++j)
		{
			if(A[i-1] == B[j-1]) {
				DP[i][j] = DP[i-1][j-1] + 1;
			}
			else{
				DP[i][j] = max(DP[i][j-1],DP[i-1][j]);
			}
		}
	}
	// for (int i = 0; i <= A.size(); ++i)
	// {
	// 	for (int j = 0; j <= B.size(); ++j)
	// 	{
	// 		cout << DP[i][j] << " ";
	// 	}
	// 	cout << '\n';
	// }
	printf("%d\n%s\n", DP[A.size()][B.size()],backtracking(A.size(),B.size()).c_str());
}