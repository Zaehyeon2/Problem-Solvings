#include <bits/stdc++.h>

using namespace std;

int main(){
	int h, m;
    cin >> h >> m;
    int total = h*60 + m;
    if (total < 45) total = 24*60 + m;
    total -= 45;
    cout << total / 60 << " " << total % 60;
}