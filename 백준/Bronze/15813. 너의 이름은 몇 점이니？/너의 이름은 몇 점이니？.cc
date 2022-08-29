#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int main() {
	int N; cin >> N;
	string name; cin >> name;
	int score = 0;
	for (int i = 0; i < N; ++i)
	{
		score += name[i] - 'A' + 1;
		// printf("%c %d\n", name[i], score);
	}
	printf("%d\n", score);
}