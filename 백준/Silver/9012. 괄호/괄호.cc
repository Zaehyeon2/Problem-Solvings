#include <stack>
#include <iostream>
#include <string>

using namespace std;

int main(){
    int T; cin >> T;
    while(T--){
        string ps; cin >> ps;
        stack <int> valid;
        for(int i = 0; i < ps.size(); i++){
            if(ps[i] == '('){
                valid.push(0);
            }
            else {
                if(valid.empty()){
                    valid.push(1);
                }
                else if(valid.top() == 0){
                    valid.pop();
                }
            }
        }
        if(!valid.empty()){
            cout << "NO\n";
        }
        else cout << "YES\n";
    }
}