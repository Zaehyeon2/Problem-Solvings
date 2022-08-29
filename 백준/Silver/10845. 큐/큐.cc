#include <queue>
#include <stdio.h>

using namespace std;

queue <int> q;

int main() {
	int T; scanf("%d", &T);
	for (int i = 0; i < T; i++){
		char inp[6] = {};
		scanf("%s", inp);
		if (inp[0] == 'p' && inp[1] == 'u'){
			int X; scanf("%d", &X);
			q.push(X);
		}
		else if ( inp[0] =='p' && inp[1] == 'o'){
			if (q.empty()){
				printf("-1\n");
			}
			else {
				int frn = q.front();
				printf("%d\n", frn);
				q.pop();
			}
		}
		else if (inp[0] == 's') {
			printf("%d\n", q.size());
		}
		else if (inp[0] == 'e'){
			printf("%d\n", q.empty());
		}
		else if (inp[0] == 'f'){
			if (q.empty()){
				printf("-1\n");
			}
			else {
				printf("%d\n", q.front());
			}
		}
		else if (inp[0] == 'b'){
			if (q.empty()){
				printf("-1\n");
			}
			else {
				printf("%d\n", q.back());
			}
		}
	}
}