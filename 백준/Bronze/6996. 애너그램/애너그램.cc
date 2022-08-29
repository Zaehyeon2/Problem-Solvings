#include <iostream>
#include <string>

using namespace std;

bool anagrams(string &tmp1, string &tmp2){
	int num1[200] = {};
	int num2[200] = {};
	for(int j = 0; j < tmp1.size(); j++) {
			num1[tmp1[j]]++;

		}
		for(int j = 0; j < tmp2.size(); j++) {
			num2[tmp2[j]]++;

		}
		for(int j = 'a'; j <= 'z'; j++){
			if(num1[j] != num2[j]){
				return 0;
		}
	}
	return 1;
}

int main(){
	int N; cin >> N;
	for (int i = 0; i < N; ++i)
	{
		string tmp1, tmp2; cin >> tmp1 >> tmp2;
		if(anagrams(tmp1, tmp2)){
			cout << tmp1 + " & " + tmp2 + " are anagrams.\n";

		}
		else {
			cout << tmp1 + " & " + tmp2 + " are NOT anagrams.\n";
		}
	}
}