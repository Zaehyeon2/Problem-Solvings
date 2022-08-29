#include <bits/stdc++.h>

using namespace std;

int ruler(string n, int ret){
    if(n.size() == 1){
        printf("%d\n", ret);
        return n[0] - '0';
    }
    int sum = 0;
    for(int i = 0; i < n.size(); i++){
        sum += n[i] - '0';
    }
    return ruler(to_string(sum), ret+1);
}

int main(){
    string N; cin >> N;
    // cout << ruler(N, 0) << endl;
    if(ruler(N, 0)%3 == 0){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
}
