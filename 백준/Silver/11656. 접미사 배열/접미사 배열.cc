#include <bits/stdc++.h>

using namespace std;

vector <string> v;

int main(){
    string S; cin >> S;
    for(int i = 0; i < S.size(); i++){
        v.push_back(S.substr(i, S.size()));
    }
    sort(v.begin(), v.end());
    for (size_t i = 0; i < v.size(); i++)
    {
        cout << v[i] + '\n';
    }
    
}