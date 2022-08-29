#include <stdio.h>

int arr[10001] = {};

int main() {
    int N;
    scanf("%d", &N);
    while (N--) {
        int inp;
        scanf("%d", &inp);
        arr[inp]++;
    }
    for (int i = 1; i < 10001; i++) {
        for (int j = 0; j < arr[i]; j++) {
            printf("%d\n", i);
        }
    }
}
