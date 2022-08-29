#include <iostream>
#include <string>

using namespace std;

int main(){
   cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int N; cin >> N;
   	cin.ignore();
   for(int i = 0; i <N; i++){
      string word; 
      getline(cin, word);
      word[0] = toupper(word[0]);   
      
      cout << word << '\n';
   }
}