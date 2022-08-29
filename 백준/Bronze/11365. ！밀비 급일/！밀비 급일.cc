#include <iostream>
#include <string>

using namespace std;

int main(){
	cin.tie(NULL);
    ios::sync_with_stdio(false);
    
	while(true){
		string word;
		getline(cin, word);

		if (word == "END"){
			break;
		}
		for(int i = word.size()-1; i >= 0; i--){
			cout << word[i];
		}
		cout << '\n';
	}
}