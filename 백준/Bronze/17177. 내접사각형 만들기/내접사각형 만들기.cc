#include <bits/stdc++.h>
#define mp(x, y) make_pair(x, y)

using namespace std;


int main(){
    int a, b, c; cin >> a >> b >> c;
    int ans;
    bool bl = 0;
    for(int i = 1; i <= c; i++){
        if((a*a - b*b) * (a*a - c*c) == pow(a * i + b * c, 2)){
            ans = i;
            bl = 1;
        } 
    }
    for(int i = c; i <= a; i++){
        if((a*a - i*i) * (a*a - b*b) == pow(a*c + b*i, 2)){
            ans = i;
            bl = 1;
        }
    }
    if(bl) printf("%d\n", ans);
    else printf("-1\n");
}