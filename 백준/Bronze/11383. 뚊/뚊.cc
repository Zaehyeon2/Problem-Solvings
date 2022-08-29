#include <iostream>
#include <string>

using namespace std;

string inp[11];
string ans[11];
string make[11];

int main(){
	int A, B; cin >> A >> B;
	for (int i = 0; i < A; ++i)
	{
		cin >> inp[i];
	}
	for (int i = 0; i < A; ++i)
	{
		cin >> ans[i];
	}
	for (int i = 0; i < A; ++i)
	{
		for(int j = 0; j < B; j++){
			for(int k = 0; k < 2; k++){
				make[i] += inp[i][j];
			}
		}
	}
	for (int i = 0; i < A; ++i)
	{
		if(ans[i] != make[i]){
			printf("Not Eyfa\n");
			return 0;
		}
	}
	printf("Eyfa\n");
}