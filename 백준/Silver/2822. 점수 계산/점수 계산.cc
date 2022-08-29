#include <stdio.h>

int main(int argc, char const *argv[]) {
    int inp[8] = {};
    int save[8] = {};
    bool num[8] = {};
    int sum = 0;
    for (int i = 0; i < 8; i++) {
        scanf("%d", &inp[i]);
        save[i] = inp[i];
    }
    for (int j = 0; j < 8; j++){
        for (int k = 0; j + k < 7; k++){
            if ( inp[k] > inp[k+1]) {
                int tmp = inp[k];
                inp[k] = inp[k+1];
                inp[k+1] = tmp;
            }
        }
    }
    sum = inp[3] + inp[4] + inp[5] + inp[6] + inp[7];
    for (int j = 3; j < 8; j++){
        for (int k = 0; k < 8; k++){
            if ( inp[j] == save[k] ) {
                num[k] = 1;
            }
        }
    }
    printf("%d\n",sum );
    for (int i = 0; i < 8; i++) {
        if (num[i] == 1) {
            printf("%d ", i+1);
        }
    }
    return 0;
}
