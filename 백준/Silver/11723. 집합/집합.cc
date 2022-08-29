#include <string.h>
#include <cstdio>

using namespace std;

int main() {
    int N; scanf("%d", &N);;
    int set = 0;
    while (N--){
        char ch[10] = {};
        scanf("%s\n", ch);
        if (!strcmp(ch,"add")) {
            int inp; scanf("%d", &inp);
            set |= (1 << inp);
        }
        if (!strcmp(ch,"remove")) {
            int inp; scanf("%d", &inp);
            set &= ~(1 << inp);
        }
        if (!strcmp(ch,"check")) {
            int inp; scanf("%d", &inp);
            if (set & (1 << inp)) {
                printf("1\n");
            }
            else {
                printf("0\n");
            }
        }
        if (!strcmp(ch,"toggle")) {
            int inp; scanf("%d", &inp);
            set ^= (1 << inp);
        }
        if (!strcmp(ch,"all")) {
            set = (1 << 21) - 2;

        }
        if (!strcmp(ch,"empty")) {
            set = 0;
        }
    }
}
