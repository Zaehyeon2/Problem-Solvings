#include <cstdio>
#include <queue>
#include <string>
#include <cstring>

using namespace std;

bool chk[10001];
int ans[10001];
bool isprime[10001];

void primeset() {
	for(int i = 2; i < 10000; i++){
		for(int j = i + 1; j < 10000; j++){
			if(!(j % i)) isprime[j] = 1;
		}
	}
}


void bfs(int s){
	chk[s] = true;
	queue <int> q;
	q.push(s);
	ans[s] = 0;
	while(!q.empty()){
		int a = q.front();
		q.pop();
		for(char i = '0'; i <= '9'; i++){
			string tmp = to_string(a);
			tmp[3] = i;
			int tmpi = stoi(tmp);
			if(chk[tmpi] == 0 && isprime[tmpi] == 0){
				q.push(tmpi);
				ans[tmpi] = ans[a]+1;
				chk[tmpi] = 1;
			}
		}
		for(char i = '0'; i <= '9'; i++){
			string tmp = to_string(a);
			tmp[2] = i;
			int tmpi = stoi(tmp);
			if(chk[tmpi] == 0 && isprime[tmpi] == 0){
				q.push(tmpi);
				ans[tmpi] = ans[a]+1;
				chk[tmpi] = 1;
			}
		}
		for(char i = '0'; i <= '9'; i++){
			string tmp = to_string(a);
			tmp[1] = i;
			int tmpi = stoi(tmp);
			if(chk[tmpi] == 0 && isprime[tmpi] == 0){
				q.push(tmpi);
				ans[tmpi] = ans[a]+1;
				chk[tmpi] = 1;
			}
		}
		for(char i = '1'; i <= '9'; i++){
			string tmp = to_string(a);
			tmp[0] = i;
			int tmpi = stoi(tmp);
			if(chk[tmpi] == 0 && isprime[tmpi] == 0){
				q.push(tmpi);
				ans[tmpi] = ans[a]+1;
				chk[tmpi] = 1;
			}
		}
	}
}


int main() {
	primeset();
	int T; scanf("%d", &T);
	while(T--){
		int A, B; scanf("%d%d", &A, &B);
		bfs(A);
		printf("%d\n", ans[B]);
		memset(ans, 0, sizeof(ans));
		memset(chk, 0, sizeof(chk));
	}
}