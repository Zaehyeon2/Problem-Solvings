#include <cstdio>

int n, in[100001], post[100001];

void toPre(int iidx, int pidx, int size) {
    if (size < 1) {
        return;
    }
    int root = post[pidx + size - 1];
    printf("%d ", root);
    int cnt = 0;
    for (int i = iidx; i < iidx + size; i++) {
        if (root == in[i]){
            break;
        }
        cnt++;
    }
    toPre(iidx, pidx, cnt);
    toPre(iidx + cnt + 1, pidx + cnt, size - cnt - 1);
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &in[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &post[i]);
    }
    toPre(0, 0, n);
    printf("\n");
}
