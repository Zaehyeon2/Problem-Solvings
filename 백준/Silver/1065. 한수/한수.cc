#include <cstdio>
#include <string>

using namespace std;

int main(void) {
    int N, sum = 0; scanf("%d", &N);
    if ( N <= 99) {
        printf("%d\n", N);
        return 0;
    }
    else {
        sum += 99;
    }
    for ( int i = 100; i <= N; i++){
        string tmp = to_string(i);
        if (tmp[0] + tmp[2] == tmp[1] * 2) sum++;
    }
    printf("%d\n", sum);
}
