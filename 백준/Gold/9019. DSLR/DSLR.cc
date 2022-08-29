#include <cstdio>
#include <queue>
#include <string>
#include <cstring>

using namespace std;

int A, B;

bool DSLR[10001];
string chk[10001];

int D(int a){
	return (a * 2) % 10000;
}

int S(int a){
	return a = (a - 1 >= 0) ? a - 1 : 9999;
}

int L(int a){
	return a = (a * 10 + a * 10 / 10000) % 10000;
}

int R(int a){
	return a = a / 10 + (a%10*1000);
}
void bfs(int s){
	queue <int> q;
	q.push(s);
	DSLR[s] = true;
	while (!q.empty()){
		int fr = q.front();
		q.pop();
		if(fr == B) return;
		if(DSLR[D(fr)] == false){
			DSLR[D(fr)] = true;
			q.push(D(fr));
			chk[D(fr)] = chk[fr] + 'D';
		}
		if(DSLR[S(fr)] == false){
			DSLR[S(fr)] = true;
			q.push(S(fr));
			chk[S(fr)] = chk[fr] + 'S';
		}
		if(DSLR[L(fr)] == false){
			DSLR[L(fr)] = true;
			q.push(L(fr));
			chk[L(fr)] = chk[fr] + 'L';
		}
		if(DSLR[R(fr)] == false){
			DSLR[R(fr)] = true;
			q.push(R(fr));
			chk[R(fr)] = chk[fr] + 'R';
		}
	}
	return;
}


int main() {
	int T; scanf("%d", &T);
	while(T--){
		memset(DSLR, 0, sizeof(DSLR));
		for (int i = 0; i < 10001; ++i)
		{
			chk[i] = "";
		}
		scanf("%d%d", &A, &B);
		bfs(A);
		printf("%s\n", chk[B].c_str());
	}
}