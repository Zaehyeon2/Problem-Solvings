#include <bits/stdc++.h>

using namespace std;

int main(){
	string inp;
	cin >> inp;
    int ans = 0;
    inp = 'A' + inp;
    for(int i = 0; i < inp.size()-1; i++){
    	ans += min(abs((inp[i+1] - 'A') - (inp[i] - 'A')), 26 - abs((inp[i+1] - 'A') - (inp[i] - 'A')));
    }
    cout << ans << '\n';
    return 0;
}