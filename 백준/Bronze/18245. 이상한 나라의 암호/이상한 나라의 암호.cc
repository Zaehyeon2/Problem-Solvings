#include <bits/stdc++.h>

using namespace std;

int main(){
    string tmp;
    for(int i = 2; ;i++){
        cin >> tmp;
        if(tmp == "Was") break;
        for(int j = 0; j < tmp.size(); j+=i){
            cout << tmp[j];
        }
        cout << '\n';
    }
}