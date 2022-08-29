#include <bits/stdc++.h>

using namespace std;

int main(){
	int snowball[601];
	int T; cin >> T;
	long long int ans = 600000000000;
	for(int i = 0; i < T; i++){
		cin >> snowball[i];
	}
	sort(snowball, snowball+T);
	for(int i = 0; i < T-1; i++){
		for(int j = i+1; j < T; j++){
			long long int firsth = snowball[i] + snowball[j];
			int a = i + 1;
			int b = T - 1;
			while(a < b){
				while (a == i || a == j){
					a++;
				}
				while (b == i || b == j){
					b--;
				}
				if(a >= b) break;
				long long int secondh = snowball[a] + snowball[b];
				if(firsth < secondh) b--;
				else a++;
				ans = min(ans, abs(firsth - secondh));
			}
		}
	}
	cout << ans << endl;
}