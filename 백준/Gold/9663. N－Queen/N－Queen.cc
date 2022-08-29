#include <cstdio>

int ans,N;
int chess[15];
bool chk[15];

int abs(int s) {
    if (s < 0){
        return s*-1;
    }
    return s;
}

bool c(int s,int t){
    if (chk[t]) return false;
    for (int i = 0; i < s; i++){
        if (abs(i - s) == abs(chess[i] - t)){
            return false;
        }
    }
    return true;
}

void foo(int s){
    if (s == N) ans++;
    for(int i = 0; i < N; i++){
        chess[s] = i;
        if (c(s,i)) {
            chk[i] = true;
            foo(s+1);
            chk[i] = false;
        }
    }
}

int main() {
    scanf("%d", &N);
    foo(0);
    printf("%d\n", ans);
}
