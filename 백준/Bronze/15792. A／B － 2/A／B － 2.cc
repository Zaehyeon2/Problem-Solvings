#include <cstdio>
#include <string>

using namespace std;

int A, B;
string ans;

int main() {
	scanf("%d%d",&A, &B);
	ans += to_string(A / B) + '.';
	A %= B;
	for(int i = 0; i < 1000; i ++) {
		A *= 10;
		ans += to_string(A/B);
    	A %= B;
    	if(A == 0) break;
  	}
	printf("%s\n", ans.c_str());
}