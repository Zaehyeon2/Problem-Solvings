#include<iostream>
using namespace std;
typedef long long ll;

ll POW(ll a, ll b, ll m){
    if(b == 0) return 1;
    ll val = POW(a, b/2, m);
    val = val * val % m;
    
    //b가 짝수, 홀수인 경우 나눠서 처리
    if(b % 2 == 0) return val;
    else
        return (val * a) % m;
    
}

int main(void){
    int a, b, m;
    cin >> a >> b >> m;
    cout << POW(a, b, m);
    return 0;
}