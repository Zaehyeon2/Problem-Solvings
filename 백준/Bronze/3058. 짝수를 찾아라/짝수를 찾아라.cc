#include <cstdio>

int main() {
    int N; scanf("%d", &N);
    while (N--) {
        int min = 100;
        int sum = 0, i = 7;
        while(i--) {
            int inp; scanf("%d", &inp);
            if (inp % 2 == 0){
                if (min > inp){
                    min = inp;
                }
                sum += inp;
            }
        }
        printf("%d %d\n", sum, min);
    }
}
