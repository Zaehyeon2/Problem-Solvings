#include <cstdio>

int S, N, ans = 0;
int su[21];

bool foo(int s) {
    int sum = 0;
    for (int i = 0; i < N; i++) {
        if (s & (1 << i)) {
            sum += su[i];
        }
    }
    if(sum == S) return true;
    return false;
}

int main() {
    scanf("%d %d", &N, &S);
    for (int i = 0; i < N; i++) {
        scanf("%d\n", &su[i]);
    }
    for (int i = 1; i < (1 << N); i++) {
        if (foo(i)) {
            ans++;
        }
    }
    printf("%d\n", ans);
}
