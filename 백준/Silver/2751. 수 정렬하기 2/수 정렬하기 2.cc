#include <bits/stdc++.h>

using namespace std;

int arr[1000001];

int main(){
	int T; cin >> T;
	
	for(int i = 0; i < T; i++){
		cin >> arr[i];
	}
	sort(arr, arr+T);
	for(int i = 0; i < T; i++){
		cout << arr[i] << '\n';
	}
}