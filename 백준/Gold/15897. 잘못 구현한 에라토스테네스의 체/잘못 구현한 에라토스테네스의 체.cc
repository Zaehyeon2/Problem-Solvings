#include <bits/stdc++.h>
 
using namespace std;

int main() {
    int n;
    long long ans = 0;
    
    scanf("%d", &n);
    
    n--;
 
    for (int i = n+1; i != 0; i = n/((n/i)+1))
        ans += (n/i+1)*(i-(n/((n/i)+1)));
 
    printf("%lld\n", ans);
}