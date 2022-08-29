#include <stdio.h>

int main(int argc, char const *argv[]) {
    int N;
    char arr[100] = {};
    int sum = 0;
    scanf("%d\n", &N);
    for (int i = 0; i < N; i++) {
        scanf("%c", &arr[i]);
    }
    for (int i = 0; i < N; i++) {
        sum += arr[i] - '0';
    }
    printf("%d\n",sum );
    return 0;
}
