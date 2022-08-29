#include <cstdio>
#include <string>

using namespace std;

int main() {
	char trash;
	int H, M, S; scanf("%2d%c%2d%c%2d", &H, &trash, &M, &trash, &S);
	int H2, M2, S2; scanf("%2d%c%2d%c%2d", &H2, &trash, &M2, &trash, &S2);
	int ans = H2 * 60 * 60 + M2 * 60 + S2 + 24*60*60;
	int com = H * 60 * 60 + M * 60 + S;
	int real = ans - com;
	printf("%02d%c%02d%c%02d\n", real/60/60%24, ':', real/60%60,':',real%60);
}