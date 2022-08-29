#include <bits/stdc++.h>

using namespace std;

bool pelin(int *ch, int j){
    for(int i = 0; i < j/2; i++){
        if(ch[i] != ch[j-i-1]) return false;
    }
    return true;
}

bool check(int N, int k){
    int buffer[20] = {};
    int i = 0;
    while(N){
        buffer[i++] = N%k;
        N /= k;
    }
    return pelin(buffer, i);
}

int main(){
    int N; cin >> N;
    for (size_t i = 0; i < N; i++)
    {
        bool bl = false;
        int data; cin >> data;
        for(int j = 2; j <= 64; j++){
            if(check(data, j)){
                bl = true;
                break;
            }
        }
        printf("%d\n", bl);
    }
    
}