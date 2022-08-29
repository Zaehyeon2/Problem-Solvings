#include <stack>
#include <string>
#include <iostream>
#include <cstdio>

using namespace std;

char L[600001];
char R[600001];
int Ltop = -1;
int Rtop = -1;

int main(){
	while(1){
		char a; scanf("%c", &a);
		if(a == '\n') break;
		L[++Ltop] = a;
	}
	int N; scanf("%d", &N);
	for (int i = 0; i < N; ++i) {
		char inp; cin >> inp;
		if(inp == 'P'){
			char tmp; cin >> tmp;
			L[++Ltop] = tmp;
		}
		else if(inp == 'L'){
			if(Ltop != -1) {
				R[++Rtop] = L[Ltop--];
			}
		}
		else if(inp == 'D'){
			if(Rtop != -1){
				L[++Ltop] = R[Rtop--];
			}
		}
		else if(inp == 'B'){
			if(Ltop != -1) Ltop--;;
		}
	}
	for (int i = 0; i <= Ltop; ++i)
	{
		printf("%c", L[i]);
	}
	for (int i = Rtop; i >= 0; --i)
	{
		printf("%c", R[i]);
	}
	printf("\n");
}